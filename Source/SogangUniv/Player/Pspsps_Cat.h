// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "../Effect/Pspsps_CatSkill1.h"
#include "PlayerCharacter.h"
#include "Pspsps_Cat.generated.h"

/**
 * 
 */
class UQuestNPCWidget;
class UShopWidget;
UCLASS()
class SOGANGUNIV_API APspsps_Cat : public APlayerCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APspsps_Cat();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*>	m_AttackMontageArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*>	m_SkillMontageArray;

	TSubclassOf<APspsps_CatSkill1>		m_Skill1Class;

	int32			m_AttackIndex;

	class ABottle*	m_Weapon;
	UQuestNPCWidget* m_pQuestNPC;
	UShopWidget* m_pShopNPC;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	virtual void Attack();
	virtual void Skill1();
	virtual void Interaction();

public:
	virtual void NormalAttack();
	virtual void AttackEnd();
	virtual void UseSkill(int32 Index);
};