// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Patrol.h"
#include "../Enemy/Enemy.h"
#include "../Enemy/EnemyAIController.h"
#include "../Player/PlayerCharacter.h"

UBTTask_Patrol::UBTTask_Patrol()
{
	NodeName = TEXT("Patrol");
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_Patrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);


	AEnemyAIController* Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!Controller)
		return EBTNodeResult::Failed;

	AEnemy* Enemy = Cast<AEnemy>(Controller->GetPawn());
	if (!Enemy)
		return EBTNodeResult::Failed;

	// Animation Change
	Enemy->ChangeAnimType(EEnemyAnimType::Walk);
	Enemy->GetCharacterMovement()->MaxWalkSpeed = Enemy->GetEnemyInfo().MoveSpeed * 0.5f;

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, Enemy->GetPatrolPoint());

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_Patrol::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type	result = Super::AbortTask(OwnerComp, NodeMemory);

	return result;
}

void UBTTask_Patrol::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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

	// Patrol Point µµÂø
	FVector PatrolPoint = Enemy->GetPatrolPoint();
	FVector EnemyLoc = Enemy->GetActorLocation();

	float CapsuleHalfHeight = Enemy->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();
	float CapsuleRadius = Enemy->GetCapsuleComponent()->GetUnscaledCapsuleRadius();
	float Distance = FVector::Distance(EnemyLoc, PatrolPoint);

	if (Distance <= CapsuleHalfHeight + CapsuleRadius)
	{
		Enemy->NextPatrolPoint();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}