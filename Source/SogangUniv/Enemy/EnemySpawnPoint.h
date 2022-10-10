// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Enemy.h"
#include "GameFramework/Actor.h"
#include "EnemySpawnPoint.generated.h"

UCLASS()
class SOGANGUNIV_API AEnemySpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawnPoint();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemy>	m_EnemyClass;

	AEnemy*		m_Enemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		m_SpawnTime;
	float		m_AccTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<class APatrolPoint*> m_PatrolPointArray;

public:
	void Death() { m_Enemy = nullptr; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
