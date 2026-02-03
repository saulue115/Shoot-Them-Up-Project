// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootThemUp/RewindTime/Components/RewindComponent.h"
#include "ShootThemUp/RewindTime/Components/RewindVisualizationComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"
#include "ShootThemUp/Framework/GameModes/STUGameModeBase.h"

// Sets default values for this component's properties
URewindComponent::URewindComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Tick after movement is completed
	PrimaryComponentTick.TickGroup = TG_PostPhysics;
}


// Called when the game starts
void URewindComponent::BeginPlay()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(URewindComponent::BeginPlay);
	
	Super::BeginPlay();

	GameMode = Cast<ASTUGameModeBase>(GetWorld()->GetAuthGameMode());

	if (!GameMode)
	{
		// Disable ticking if we can't find the rewind game mode; no hope of rewinding
		SetComponentTickEnabled(false);
		return;
	}


	// Grab owner's root component to manipulate physics during rewind
	OwnerRootComponent = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());

	// Grab owner's rewind visualization component, if it exists
	OwnerVisualizationComponent = GetOwner()->FindComponentByClass<URewindVisualizationComponent>();

	// If movement snapshotting is enabled, grab the owner's movement component
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (bSnapshotMovementVelocityAndMode)
	{
		OwnerMovementComponent = Character ? Cast<UCharacterMovementComponent>(Character->GetCharacterMovement()) : nullptr;
	}

	// If configured to pause animations, grab the owner's skeletal mesh
	if (bPauseAnimationDuringTimeScrubbing)
	{
		OwnerSkeletalMesh = Character ? Character->GetMesh() : nullptr;
	}

	// Bind to rewind/time scrub start/complete events on the game mode
	GameMode->OnGlobalRewindStarted.AddUniqueDynamic(this,&ThisClass::OnGlobalRewindStarted);
	GameMode->OnGlobalRewindCompleted.AddUniqueDynamic(this,&ThisClass::OnGlobalRewindCompleted);
	GameMode->OnGlobalFastForwardStarted.AddUniqueDynamic(this,&ThisClass::OnGlobalFastForwardStarted);
	GameMode->OnGlobalFastForwardCompleted.AddUniqueDynamic(this,&ThisClass::OnGlobalFastForwardCompleted);
	GameMode->OnGlobalTimeScrubStarted.AddUniqueDynamic(this, &URewindComponent::OnGlobalTimeScrubStarted);
	GameMode->OnGlobalTimeScrubCompleted.AddUniqueDynamic(this, &URewindComponent::OnGlobalTimeScrubCompleted);

	// Bind to timeline visualization events on the game mode
	GameMode->OnGlobalTimelineVisualizationEnabled.AddUniqueDynamic(this, &URewindComponent::OnGlobalTimelineVisualizationEnabled);
	GameMode->OnGlobalTimelineVisualizationDisabled.AddUniqueDynamic(this, &URewindComponent::OnGlobalTimelineVisualizationDisabled);
	bIsVisualizingTimeline = GameMode->IsGlobalTimelineVisualizationEnabled();

	// Preallocate the space required in the ring buffers
	InitializeRingBuffers(GameMode->MaxRewindSeconds);
}


// Called every frame
void URewindComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(URewindComponent::TickComponent);
	
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsRewinding)
	{
		PlaySnapshots(DeltaTime,true /*bIsRewinding*/);
		
	}else if (bIsFastForwarding)
	{
		PlaySnapshots(DeltaTime,false /*bIsRewinding*/);
		
	}else if (bIsTimeScrubbing)
	{
		PauseTime(DeltaTime,bLastTimeManipulationWasRewind);
	}else
	{
		RecordSnapshot(DeltaTime);
	}

	if (bIsVisualizingTimeline)
	{
		VisualizeTimeline();
	}
}

void URewindComponent::SetIsRewindingEnabled(bool bEnabled)
{
	bIsRewindingEnabled = bEnabled;

	if (!bIsRewindingEnabled)
	{
		// Stop rewinding if necessary
		if (bIsRewinding)
		{
			OnGlobalRewindCompleted();
		}

		// Stop fast forwarding if necessary
		if (bIsFastForwarding)
		{
			OnGlobalFastForwardCompleted();
		}

		// Stop time scrubbing if necessary
		if (bIsTimeScrubbing)
		{
			OnGlobalTimeScrubCompleted();
		}
	}else
	{
		check(GameMode);

		// Start rewinding if a global rewind is in progress
		if (!bIsRewinding && GameMode->IsGlobalRewinding())
		{
			OnGlobalRewindStarted();
		}

		// Start fast forwarding if necessary
		if (!bIsFastForwarding && GameMode->IsGlobalFastForwarding())
		{
			OnGlobalFastForwardStarted();
		}

		// Start time scrubbing if a global time scrub is in progress
		if (!bIsTimeScrubbing && GameMode->IsGlobalTimeScrubbing())
		{
			OnGlobalTimeScrubStarted();
		}
	}
}

void URewindComponent::OnGlobalRewindStarted()
{
	// Attempt to start rewinding; reset TimeSinceSnapshotsChanged if not time scrubbing
	bool bAlreadyManipulationgTime = IsTimeBeingManipulated();

	if (TryStartTimeManipulation(bIsRewinding,!bIsTimeScrubbing))
	{
		// Notify event subscribers that rewind (and possibly time manipulation) started
		OnRewindStarted.Broadcast();
		
		if (!bAlreadyManipulationgTime)
		{
			OnTimeManipulationStarted.Broadcast();
		}
	}
}

void URewindComponent::OnGlobalFastForwardStarted()
{
}

void URewindComponent::OnGlobalTimeScrubStarted()
{
}

void URewindComponent::OnGlobalRewindCompleted()
{
}

void URewindComponent::OnGlobalFastForwardCompleted()
{
}

void URewindComponent::OnGlobalTimeScrubCompleted()
{
}

void URewindComponent::OnGlobalTimelineVisualizationEnabled()
{
}

void URewindComponent::OnGlobalTimelineVisualizationDisabled()
{
}

void URewindComponent::InitializeRingBuffers(float MaxRewindSeconds)
{
}

void URewindComponent::RecordSnapshot(float DeltaTime)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(URewindComponent::RecordSnapshot);
}

void URewindComponent::EraseFutureSnapshots()
{
}

void URewindComponent::PlaySnapshots(float DeltaTime, bool bRewinding)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(URewindComponent::PlaySnapshots);

	UnpauseAnimation();

	if (HandleInsufficientSnapshots())
	{
		return;
	}

	// Apply time dilation to delta time
	DeltaTime *= GameMode->GetGlobalRewindSpeed();

	TimeSinceSnapshotsChanged += DeltaTime;

	bool bReachedEndOfTrack = false;

	float LatestSnapshotTime = TransformAndVelocitySnapshots[LatestSnapshotIndex].TimeSinceLastSnapshot;

	
}

void URewindComponent::PauseTime(float DeltaTime, bool bRewinding)
{
}

bool URewindComponent::TryStartTimeManipulation(bool& bStateToSet, bool bResetTimeSinceSnapshotsChanged)
{

	if (!bIsRewindingEnabled || bStateToSet) return false;

	// Turn on requested time manipulation (i.e. bIsRewinding, bIsFastForwarding, bIsTimeScrubbing)
	bStateToSet = true;

	// Caller may want to maintain current interpolation (ex. during time scrubbing)
	if (bResetTimeSinceSnapshotsChanged) { TimeSinceSnapshotsChanged = 0.0f; }

	// Physics simulation disabled during rewinding
	PausePhysics();

	// Check whether animations were paused when we started this time manipulation operation
	bAnimationsPausedAtStartOfTimeManipulation = bPausedAnimation;
	
	return true;
}

bool URewindComponent::TryStopTimeManipulation(bool& bStateToSet, bool bResetTimeSinceSnapshotsChanged,
	bool bResetMovementVelocity)
{
	return false;
}

void URewindComponent::PausePhysics()
{
}

void URewindComponent::UnpausePhysics()
{
}

void URewindComponent::PauseAnimation()
{
}

void URewindComponent::UnpauseAnimation()
{
}

bool URewindComponent::HandleInsufficientSnapshots()
{
	return false;
}

void URewindComponent::InterpolateAndApplySnapshots(bool bRewinding)
{
}

FTransformAndVelocitySnapshot URewindComponent::BlendSnapshots(const FTransformAndVelocitySnapshot& A,
	const FTransformAndVelocitySnapshot& B, float Alpha)
{
	return FTransformAndVelocitySnapshot();
}

FMovementVelocityAndModeSnapshot URewindComponent::BlendSnapshots(const FMovementVelocityAndModeSnapshot& A,
	const FMovementVelocityAndModeSnapshot& B, float Alpha)
{
	return FMovementVelocityAndModeSnapshot();
}

void URewindComponent::ApplySnapshot(const FTransformAndVelocitySnapshot& Snapshot, bool bApplyPhysics)
{
}

void URewindComponent::ApplySnapshot(const FMovementVelocityAndModeSnapshot& Snapshot,
	bool bApplyTimeDilationToVelocity)
{
}

void URewindComponent::VisualizeTimeline()
{
}

