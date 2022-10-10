// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_TargetTrace.h"
#include "../Player/PlayerCharacter.h"
#include "../Enemy/Enemy.h"
#include "../Enemy/EnemyAIController.h"

UBTTask_TargetTrace::UBTTask_TargetTrace()
{
	NodeName = TEXT("TargetTrace");
	bNotifyTick = true;
}

UBTTask_TargetTrace::~UBTTask_TargetTrace()
{
}

EBTNodeResult::Type UBTTask_TargetTrace::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);


	AEnemyAIController* Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!Controller)
		return EBTNodeResult::Failed;
	
	AEnemy* Enemy = Cast<AEnemy>(Controller->GetPawn());
	if (!Enemy)
		return EBTNodeResult::Failed;


	APlayerCharacter* Target = Cast<APlayerCharacter>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	if (!Target)
	{
		// Animation Change
		Enemy->ChangeAnimType(EEnemyAnimType::Idle);

		Controller->StopMovement();
		return EBTNodeResult::Failed;
	}

	// 실제 움직이도록 동작
	Enemy->GetCharacterMovement()->MaxWalkSpeed = Enemy->GetEnemyInfo().MoveSpeed;
	UAIBlueprintHelperLibrary::SimpleMoveToActor(Controller, Target);

	// Animation Change
	Enemy->ChangeAnimType(EEnemyAnimType::Run);

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_TargetTrace::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type	result = Super::AbortTask(OwnerComp, NodeMemory);

	return result;
}

void UBTTask_TargetTrace::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

#if ENABLE_DRAW_DEBUG
	PrintViewPort(1.f, FColor::Red, TEXT("Trace"));
#endif

	// Distance 판단	

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
	if (!Target)
	{
		// Animation Change
		Enemy->ChangeAnimType(EEnemyAnimType::Idle);

		Controller->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	const FEnemyInfo& EnemyInfo = Enemy->GetEnemyInfo();

	// Target Distance
	FVector	EnemyLoc = Enemy->GetActorLocation();
	FVector TargetLoc = Target->GetActorLocation();

	EnemyLoc.Z = TargetLoc.Z;

	float Distance = FVector::Distance(EnemyLoc, TargetLoc);
	
	if (Distance <= EnemyInfo.AttackDistance)
	{
		Controller->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}
}