// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "ParticleProjectile.h"
#include "RangeCatAttack.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API ARangeCatAttack : public AParticleProjectile
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARangeCatAttack();

private:
	class AEnemy_RangeCat* m_Owner;

public:
	void SetOwnerActor(AEnemy_RangeCat* AttackOwner) { m_Owner = AttackOwner; }
	AEnemy_RangeCat* GetOwner() { return m_Owner; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float	m_ParticleDistance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void StopEvent(const FHitResult& result);
	
};
