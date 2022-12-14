// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "EffectDecal.h"
#include "QuestRoomDecal.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API AQuestRoomDecal : public AEffectDecal
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AQuestRoomDecal();

protected:
	UMaterialInstanceDynamic*	m_Material;
	float		m_Glow;
	float		m_Dir;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
