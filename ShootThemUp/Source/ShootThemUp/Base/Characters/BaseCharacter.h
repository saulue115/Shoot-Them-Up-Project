// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Abstract)
class SHOOTTHEMUP_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Props)
	uint8 bIsRunning : 1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Props)
	uint8 bIsMovingForward : 1;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:

	void OnStartRunning();

	void OnStopRunning();

	bool IsRunning() const;
	

};
