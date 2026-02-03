// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootThemUp/Base/Characters/BaseCharacter.h"
#include "ShootThemUp/Base/Components/BaseCharacterMovementComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer) :
Super(ObjectInitializer.SetDefaultSubobjectClass<UBaseCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCharacter::OnStartRunning()
{
	bIsRunning = true;
}

void ABaseCharacter::OnStopRunning()
{
	bIsRunning = false;
}

bool ABaseCharacter::IsRunning() const
{
	return bIsRunning && !GetVelocity().IsZero() && bIsMovingForward;
}



