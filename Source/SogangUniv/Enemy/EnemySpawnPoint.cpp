// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnPoint.h"
#include "PatrolPoint.h"

// Sets default values
AEnemySpawnPoint::AEnemySpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Enemy = nullptr;

	m_SpawnTime = 1.f;
	m_AccTime = 0.f;
}

// Called when the game starts or when spawned
void AEnemySpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
	if (m_EnemyClass)
	{
		FActorSpawnParameters	param;
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(m_EnemyClass, GetActorLocation(), GetActorRotation(), param);
		Enemy->SetSpawnPoint(this);


		// Patrol
		Enemy->AddPatrolPoint(GetActorLocation());
		for (auto& Point : m_PatrolPointArray)
		{
			Enemy->AddPatrolPoint(Point->GetActorLocation());
		}


		m_Enemy = Enemy;
	}
}

// Called every frame
void AEnemySpawnPoint::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);

	if (!m_Enemy)
	{
		m_AccTime += DeltaTime;

		if (m_AccTime >= m_SpawnTime)
		{
			m_AccTime = 0.f;

			// Enemy Regeneratino
			FActorSpawnParameters	param;
			param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(m_EnemyClass, GetActorLocation(), GetActorRotation(), param);
			Enemy->SetSpawnPoint(this);

			// Patrol
			Enemy->AddPatrolPoint(GetActorLocation());
			for (auto& Point : m_PatrolPointArray)
			{
				Enemy->AddPatrolPoint(Point->GetActorLocation());
			}


			m_Enemy = Enemy;
		}
	}
}

