// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_PatrolWait.h"
#include "../Enemy/Enemy.h"
#include "../Enemy/EnemyAIController.h"
#include "../Player/PlayerCharacter.h"

UBTTask_PatrolWait::UBTTask_PatrolWait()
{
	NodeName = TEXT("PatrolWait");
	bNotifyTick = true;

	m_AccTime = 0.f;
	m_WaitTime = 5.f;
}

EBTNodeResult::Type UBTTask_PatrolWait::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);


	AEnemyAIController* Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!Controller)
		return EBTNodeResult::Failed;

	AEnemy* Enemy = Cast<AEnemy>(Controller->GetPawn());
	if (!Enemy)
		return EBTNodeResult::Failed;

	// Animation Change
	Enemy->ChangeAnimType(EEnemyAnimType::Idle);
	
	Controller->StopMovement();

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_PatrolWait::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type	result = Super::AbortTask(OwnerComp, NodeMemory);

	return result;
}

void UBTTask_PatrolWait::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// Distance ÆÇ´Ü	

	AEnemyAIController* Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!Controller)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}
	
	AEnemy* Enemy = Cast<AEnemy>(Controller->GetPawn());
	if (!Enemy)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	APlayerCharacter* Target = Cast<APlayerCharacter>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	if (Target)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	m_AccTime += DeltaSeconds;
	if (m_AccTime >= m_WaitTime)
	{
		m_AccTime = 0.f; 
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}
}