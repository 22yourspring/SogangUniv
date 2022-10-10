// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Enemy_Cat.h"
#include "Enemy_MeleeCat.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API AEnemy_MeleeCat : public AEnemy_Cat
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AEnemy_MeleeCat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void NormalAttack();
};
