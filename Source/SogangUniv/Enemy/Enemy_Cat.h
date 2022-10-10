// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Enemy.h"
#include "Enemy_Cat.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API AEnemy_Cat : public AEnemy
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AEnemy_Cat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};