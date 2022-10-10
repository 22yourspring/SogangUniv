// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "PhysicalMaterialBase.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UPhysicalMaterialBase : public UPhysicalMaterial
{
	GENERATED_BODY()

public:
	UPhysicalMaterialBase();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USoundBase*			m_Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UParticleSystem*	m_Particle;

public:
	void SetSound(const FString& Path);
	USoundBase* GetSound() { return m_Sound; }

	void SetParticle(const FString& Path);
	UParticleSystem* GetParticle() { return m_Particle; }
};
