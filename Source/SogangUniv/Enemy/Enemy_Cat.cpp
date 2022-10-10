// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Cat.h"
#include "EnemyCatAIController.h"

// Sets default values
AEnemy_Cat::AEnemy_Cat()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = AEnemyCatAIController::StaticClass();
}

// Called when the game starts or when spawned
void AEnemy_Cat::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemy_Cat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
