// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootThemUp/Base/Components/BaseCharacterMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ShootThemUp/Base/Characters/BaseCharacter.h"

float UBaseCharacterMovementComponent::GetMaxSpeed() const
{
	const float MaxSpeed = Super::GetMaxSpeed();


	const ABaseCharacter* Character = Cast<ABaseCharacter>(GetPawnOwner());
	
	return Character && Character->IsRunning() ? MaxSpeed * RunModified : MaxSpeed;
}
