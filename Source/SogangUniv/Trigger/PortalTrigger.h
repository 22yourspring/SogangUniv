// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SphereTrigger.h"
#include "PortalTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API APortalTrigger : public ASphereTrigger
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APortalTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
	void TriggerBegin();

	UFUNCTION()
	void TriggerEnd();
};