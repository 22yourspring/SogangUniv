// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "DestructibleProjectile.h"
#include "Pspsps_CatSkill1.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API APspsps_CatSkill1 : public ADestructibleProjectile
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APspsps_CatSkill1();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* m_Particle;

private:
	bool	isBounced;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void StopEvent(const FHitResult& result);
	virtual void BounceEvent(const FHitResult& result, const FVector& ImpactVelocity);
};
