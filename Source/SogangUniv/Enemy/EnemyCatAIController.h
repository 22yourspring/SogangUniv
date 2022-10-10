// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnemyAIController.h"
#include "EnemyCatAIController.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API AEnemyCatAIController : public AEnemyAIController
{
	GENERATED_BODY()

public:
	AEnemyCatAIController();

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
};
