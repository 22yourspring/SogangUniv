// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EEnemyAnimType : uint8
{
	Idle,
	Walk,
	Run,
	Attack,
	Death,
	Skill
};

UENUM(BlueprintType)
enum class EEnemyAttackType : uint8
{
	Attack1,
	Attack2,
	Attack3,
	Attack4,
};

UCLASS()
class SOGANGUNIV_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UEnemyAnimInstance();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool	m_OnGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EEnemyAnimType	m_AnimType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EEnemyAttackType	m_AttackType;

public:
	EEnemyAnimType GetAnimType() const { return m_AnimType; }

	void	ChangeAnimType(EEnemyAnimType Type) { m_AnimType = Type; }
	void	SetAnimType(EEnemyAnimType Type) { m_AnimType = Type; }
	EEnemyAnimType	GetAnimType() { return m_AnimType; }


public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);
	
public:
	UFUNCTION()
	void AnimNotify_Attack();

	UFUNCTION()
	void AnimNotify_AttackEnd();

	UFUNCTION()
	void AnimNotify_DeathEnd();
};
