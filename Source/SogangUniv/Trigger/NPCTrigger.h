// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BoxTrigger.h"
#include "NPCTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API ANPCTrigger : public ABoxTrigger
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANPCTrigger();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		NpcType Type;
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