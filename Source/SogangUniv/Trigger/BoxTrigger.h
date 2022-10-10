// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Trigger.h"
#include "BoxTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API ABoxTrigger : public ATrigger
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABoxTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;	
};
