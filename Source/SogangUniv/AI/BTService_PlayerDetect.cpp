// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerDetect.h"
#include "../Player/PlayerCharacter.h"
#include "../Enemy/Enemy.h"
#include "../Enemy/EnemyAIController.h"

UBTService_PlayerDetect::UBTService_PlayerDetect()
{
	NodeName = TEXT("Detect");
	Interval = 0.5f;
}

void UBTService_PlayerDetect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AEnemyAIController*		Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	if (!Controller)
		return;

	AEnemy* Enemy = Cast<AEnemy>(Controller->GetPawn());
	if (!Enemy)
		return;

	const FEnemyInfo&	EnemyInfo = Enemy->GetEnemyInfo();

	// Enemy Detect Collision
	// ECC_GameTraceChannel7

	FCollisionQueryParams		params(NAME_None, false, Enemy);

	FHitResult HitResult;

	bool Swepp = GetWorld()->SweepSingleByChannel(HitResult,
		Enemy->GetActorLocation(), Enemy->GetActorLocation(),
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel7, 
		FCollisionShape::MakeSphere(EnemyInfo.TraceDistance),
		params);

#if ENABLE_DRAW_DEBUG
	
	FColor DrawColor = Swepp ? FColor::Red : FColor::Green;

	DrawDebugSphere(GetWorld(), Enemy->GetActorLocation(), EnemyInfo.TraceDistance, 20, DrawColor, false, 0.3f);

#endif

	if (Swepp)
		Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), HitResult.GetActor());
	else
		Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);

}