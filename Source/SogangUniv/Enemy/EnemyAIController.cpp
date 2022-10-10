// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"

AEnemyAIController::AEnemyAIController()
{

}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Black board นื Behavior Tree
	if (UseBlackboard(m_AIBlackboard, Blackboard))
	{
		if (!RunBehaviorTree(m_AITree))
		{
#if ENABLE_DRAW_DEBUG

			LOG(TEXT("Behavior Tree Test Error"));
#endif
		}
	}
}

void AEnemyAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
