// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnimInstance.h"
#include "Enemy.h"

UEnemyAnimInstance::UEnemyAnimInstance()
{
	m_OnGround = true;

	m_AnimType = EEnemyAnimType::Idle;
}

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	AEnemy* Enemy = Cast<AEnemy>(TryGetPawnOwner());

	if (Enemy)
	{
		UCharacterMovementComponent* Movement = Enemy->GetCharacterMovement();

		if (Movement)
		{
			// Jump가 끝난 판정
			m_OnGround = Movement->IsMovingOnGround();
		}
	}
}

void UEnemyAnimInstance::AnimNotify_Attack()
{
	AEnemy* Enemy = Cast<AEnemy>(TryGetPawnOwner());
	if (Enemy)
		Enemy->NormalAttack();
}

void UEnemyAnimInstance::AnimNotify_AttackEnd()
{
	AEnemy* Enemy = Cast<AEnemy>(TryGetPawnOwner());

	if (Enemy)
		Enemy->SetAttackEnd(true);
}

void UEnemyAnimInstance::AnimNotify_DeathEnd()
{
	AEnemy* Enemy = Cast<AEnemy>(TryGetPawnOwner());

	if (Enemy)
		Enemy->Death();
}