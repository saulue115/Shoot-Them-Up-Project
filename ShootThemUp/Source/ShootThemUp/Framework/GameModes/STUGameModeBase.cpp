// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootThemUp/Framework/GameModes/STUGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

ASTUGameModeBase::ASTUGameModeBase()
{
}

void ASTUGameModeBase::StartGlobalRewind()
{
	TRACE_BOOKMARK(TEXT("ASTUGameModeBase::StartGlobalRewind"));

	bIsGlobalRewinding = true;
	OnGlobalRewindStarted.Broadcast();
}

void ASTUGameModeBase::StopGlobalRewind()
{
	TRACE_BOOKMARK(TEXT("ASTUGameModeBase::StopGlobalRewind"));

	bIsGlobalRewinding = false;
	OnGlobalRewindCompleted.Broadcast();
}

void ASTUGameModeBase::StartGlobalFastForward()
{
	TRACE_BOOKMARK(TEXT("ASTUGameModeBase::StartGlobalFastForward"));
	
	bIsGlobalFastForwarding = true;
	OnGlobalFastForwardStarted.Broadcast();
	
}

void ASTUGameModeBase::StopGlobalFastForward()
{
	TRACE_BOOKMARK(TEXT("ASTUGameModeBase::StopGlobalFastForward"));
	
	bIsGlobalFastForwarding = false;
	OnGlobalFastForwardCompleted.Broadcast();
}

void ASTUGameModeBase::SetRewindSpeedSlowest()
{
	GlobalRewindSpeed = SlowestRewindSpeed;
}

void ASTUGameModeBase::SetRewindSpeedSlower()
{
	GlobalRewindSpeed = SlowerRewindSpeed;
}

void ASTUGameModeBase::SetRewindSpeedNormal()
{
	GlobalRewindSpeed = NormalRewindSpeed;
}

void ASTUGameModeBase::SetRewindSpeedFaster()
{
	GlobalRewindSpeed = FasterRewindSpeed;
}

void ASTUGameModeBase::SetRewindSpeedFastest()
{
	GlobalRewindSpeed = FastestRewindSpeed;
}

void ASTUGameModeBase::ToggleTimeScrub()
{
	bIsGlobalTimeScrubbing = !bIsGlobalTimeScrubbing;

	if (bIsGlobalTimeScrubbing)
	{
		TRACE_BOOKMARK(TEXT("ARewindGameMode::ToggleTimeScrub - Start Time Scrubbing"));
		OnGlobalTimeScrubStarted.Broadcast();
	}
	else
	{
		TRACE_BOOKMARK(TEXT("ARewindGameMode::ToggleTimeScrub - Stop Time Scrubbing"));
		OnGlobalTimeScrubCompleted.Broadcast();
	}
}

void ASTUGameModeBase::ToggleGlobalTimelineVisualization()
{
	bIsGlobalTimelineVisualizationEnabled = !bIsGlobalTimelineVisualizationEnabled;
	if (bIsGlobalTimelineVisualizationEnabled)
	{
		TRACE_BOOKMARK(TEXT("ARewindGameMode::ToggleGlobalTimelineVisualization - Enable Timeline Visualization"));
		OnGlobalTimelineVisualizationEnabled.Broadcast();
	}
	else
	{
		TRACE_BOOKMARK(TEXT("ARewindGameMode::ToggleGlobalTimelineVisualization - Disable Timeline Visualization"));
		OnGlobalTimelineVisualizationDisabled.Broadcast();
	}
}
