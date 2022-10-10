  // Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "PlayerCharacter.h"

UPlayerAnim::UPlayerAnim()
{
	m_Direction = 0.f;
	m_Speed = 0.f;
	m_Attack = false;
	m_Interaction = false;
	m_OnGround = true;

	m_AnimType = EPlayerAnimType::Ground;
}

void UPlayerAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APlayerCharacter*	Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
	{
		UCharacterMovementComponent* Movement = Player->GetCharacterMovement();

		if (Movement)
		{
			// 실제 Player의 속도를 m_Speed로 전달
			m_Speed = Movement->Velocity.Size();
			
			// Jump가 끝난 판정
			m_OnGround = Movement->IsMovingOnGround();
		}
	}
}

void UPlayerAnim::AnimNotify_AttackEnd()
{
	m_Attack = false;

	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
		Player->AttackEnd();
}

void UPlayerAnim::AnimNotify_NormalAttack()
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)	
		Player->NormalAttack();
}

void UPlayerAnim::AnimNotify_AttackCombo()
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
		Player->EnableAttack(true);
}

void UPlayerAnim::AnimNotify_InteractionEnd()
{
	SetInteraction(false);
	m_AnimType = EPlayerAnimType::Ground;
}

void UPlayerAnim::AnimNotify_JumpEnd()
{
	m_AnimType = EPlayerAnimType::Ground;
	m_OnGround = true;
}

void UPlayerAnim::AnimNotify_SkillFire()
{
	m_Attack = false;
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
	{
		Player->UseSkill(0);
		Player->AttackEnd();
	}
}

void UPlayerAnim::AnimNotify_FallStart()
{
	// Landing시 Ground의 Material Check
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
		Player->FootStep(false);
}

void UPlayerAnim::AnimNotify_LeftStep()
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
		Player->FootStep(true);
}

void UPlayerAnim::AnimNotify_RightStep()
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
		Player->FootStep(false);
}
