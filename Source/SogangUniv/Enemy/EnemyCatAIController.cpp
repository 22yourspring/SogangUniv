// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCatAIController.h"

AEnemyCatAIController::AEnemyCatAIController()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree>	AITreeAsset(TEXT("BehaviorTree'/Game/Enemy/BTEnemy.BTEnemy'"));
	if (AITreeAsset.Succeeded())
		m_AITree = AITreeAsset.Object;

	static ConstructorHelpers::FObjectFinder <UBlackboardData> BlackboardAsset(TEXT("BlackboardData'/Game/Enemy/BBEnemy.BBEnemy'"));
	if (BlackboardAsset.Succeeded())
		m_AIBlackboard = BlackboardAsset.Object;
}

void AEnemyCatAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void AEnemyCatAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
