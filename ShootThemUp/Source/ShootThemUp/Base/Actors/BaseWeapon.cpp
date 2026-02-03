// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootThemUp/Base/Actors/BaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}


APlayerController* ABaseWeapon::GetPlayerController() const
{
	return nullptr;
}

bool ABaseWeapon::GetTrace(FVector& TraceStart, FVector& TraceEnd) const
{
	return false;
}


bool ABaseWeapon::GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
	return false;
}

FVector ABaseWeapon::GetMuzzleLocation() const
{
	return FVector();
}

void ABaseWeapon::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd) const
{
}


