// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_NormalAttack.h"
#include "../Player/PlayerCharacter.h"
#include "../Enemy/Enemy_Cat.h"
#include "../Enemy/EnemyAIController.h"

UBTTask_NormalAttack::UBTTask_NormalAttack()
{
	NodeName = TEXT("Attack");
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_NormalAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

	// Animation Change
	Enemy->ChangeAnimType(EEnemyAnimType::Attack);

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_NormalAttack::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type	result = Super::AbortTask(OwnerComp, NodeMemory);

	return result;
}

void UBTTask_NormalAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

#if ENABLE_DRAW_DEBUG
	PrintViewPort(1.f, FColor::Red, TEXT("Playing Enemy Attack Animation"));
#endif

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

	// Enemy Tracking Lerp
	FVector Dir = TargetLoc - EnemyLoc;
	Dir.Normalize();

	FRotator StartRotation = Controller->GetPawn()->GetActorRotation();
	FRotator Destination = FRotator(0.f, Dir.Rotation().Yaw, 0.f);

	FRotator Result = FMath::Lerp(StartRotation, Destination, 5.0f * GetWorld()->GetDeltaSeconds());
	Enemy->SetActorRotation(Result);



	if (Enemy->GetAttackEnd())
	{
		// Attack Distance
		if (Distance > EnemyInfo.AttackDistance)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		}

		Enemy->SetAttackEnd(false);
		return;
	}
}