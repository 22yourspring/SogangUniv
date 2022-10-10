// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPlayerAnimType : uint8
{
	Ground,
	Jump,
	Death,
	NPC_Interaction,
	Object_Interaction
};

UCLASS()
class SOGANGUNIV_API UPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPlayerAnim();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float	m_Direction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float	m_Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool	m_Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool	m_Interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool	m_OnGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EPlayerAnimType	m_AnimType;

public:
	float	GetDirection() { return m_Direction; }
	void	SetDirection(float Direction) { m_Direction = Direction; }

	float	GetSpeed() { return m_Speed; }
	void	SetSpeed(float Speed) { m_Speed = Speed; }

	bool	GetAnimAttack() const { return m_Attack; }
	void	SetAnimAttack(bool Attack) { m_Attack = Attack; }
		
	bool	GetInteraction() const { return m_Interaction; }
	void	SetInteraction(bool Interaction = true) { m_Interaction = Interaction; }

	void	ChangeAnimType(EPlayerAnimType Type) { m_AnimType = Type; }
	void	SetAnimType(EPlayerAnimType Type) { m_AnimType = Type; }
	EPlayerAnimType	GetAnimType() { return m_AnimType; }

	bool	GetPawnOnGround() { return m_OnGround; }
	
public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	UFUNCTION()
	void AnimNotify_AttackEnd();

	UFUNCTION()
	void AnimNotify_NormalAttack();

	UFUNCTION()
	void AnimNotify_AttackCombo();

	UFUNCTION()
	void AnimNotify_InteractionEnd();

	UFUNCTION()
	void AnimNotify_JumpEnd();

	UFUNCTION()
	void AnimNotify_SkillFire();

	UFUNCTION()
	void AnimNotify_FallStart();

	UFUNCTION()
	void AnimNotify_LeftStep();

	UFUNCTION()
	void AnimNotify_RightStep();
};
