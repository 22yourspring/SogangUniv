// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_CheckDistance.h"
#include "../Player/PlayerCharacter.h"
#include "../Enemy/Enemy.h"
#include "../Enemy/EnemyAIController.h"

UBTDecorator_CheckDistance::UBTDecorator_CheckDistance()
{
	NodeName = TEXT("CheckDistance");
}

bool UBTDecorator_CheckDistance::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool result = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	AEnemyAIController* Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!Controller)
		return false;

	AEnemy* Enemy = Cast<AEnemy>(Controller->GetPawn());
	if (!Enemy)
		return false;

	APlayerCharacter* Target = Cast<APlayerCharacter>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	if (!Target)
		return false;

	const FEnemyInfo& EnemyInfo = Enemy->GetEnemyInfo();

	// Target Distance
	FVector	EnemyLoc = Enemy->GetActorLocation();
	FVector TargetLoc = Target->GetActorLocation();

	EnemyLoc.Z = TargetLoc.Z;

	float Distance = FVector::Distance(EnemyLoc, TargetLoc);
	float CheckDist = 0.f;

	switch (m_CheckType)
	{
	case ECheckDistanceType::Trace:
		CheckDist = EnemyInfo.TraceDistance;
		break;
	case ECheckDistanceType::Attack:
		CheckDist = EnemyInfo.AttackDistance;
		break;
	}

	return Distance <= CheckDist;
}