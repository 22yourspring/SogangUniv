// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "SelectPlayerAnimInstance.generated.h"

/**
 *
 */

UENUM(BlueprintType)
enum class ESelectPlayerAnimType : uint8
{
	Idle,
	Select
};

UCLASS()
class SOGANGUNIV_API USelectPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	USelectPlayerAnimInstance();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	ESelectPlayerAnimType	m_AnimType;

public:
	void	ChangeAnimType(ESelectPlayerAnimType Type) { m_AnimType = Type; }
	void	SetAnimType(ESelectPlayerAnimType Type) { m_AnimType = Type; }
	ESelectPlayerAnimType	GetAnimType() { return m_AnimType; }

public:
	UFUNCTION()
	void AnimNotify_TransitionIdle();
};
