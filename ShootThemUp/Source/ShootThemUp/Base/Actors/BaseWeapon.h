// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS(Abstract)
class SHOOTTHEMUP_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void StartFire() {}

	virtual void StopFire() {}

	virtual void MakeShot() {}

	APlayerController* GetPlayerController() const;

	virtual bool  GetTrace(FVector& TraceStart,FVector& TraceEnd) const;
	
	bool GetPlayerViewPoint(FVector& ViewLocation,FRotator& ViewRotation) const;

	FVector GetMuzzleLocation() const;

	void MakeHit(FHitResult& HitResult,const FVector& TraceStart,const FVector& TraceEnd) const;

};
