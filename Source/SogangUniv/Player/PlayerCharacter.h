// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class SOGANGUNIV_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* m_Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* m_Arm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent*	m_HPBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USceneCaptureComponent2D* m_Capture;

	class UTextureRenderTarget2D*	m_FaceTarget;

	class UHPBar*	m_HPBarWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FPlayerInfo			m_PlayerInfo;

	class UPlayerAnim* m_AnimInstance;

	bool	m_AttackEnable;

public:
	const FPlayerInfo& GetPlayerInfo()	const { return m_PlayerInfo; }
	void EnableAttack(bool Enable) { m_AttackEnable = Enable; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void MoveFrontKey(float Scale);
	void MoveSideKey(float Scale);
	void CameraZoomKey(float Scale);
	void CameraLookUpYKey(float Scale);
	void CameraLookUpXKey(float Scale);
	void CharacterLookUpKey(float Scale);
	
	void JumpKey();
	void AttackKey();
	void Skill1Key();
	void InteractionKey();

protected:
	virtual void Attack();
	virtual void Skill1();
	virtual void Interaction();

public:
	virtual void NormalAttack();
	virtual void AttackEnd();
	virtual void UseSkill(int32 Index);

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

public:
	UFUNCTION()
	void NameWidgetCallback();

// Physics Material
public:
	void FootStep(bool Left);

private:
	void Lerp_UI();
	int32	UI_HP;
	int32	UI_MP;

private:
	class ASogangUnivGameModeBase* GameMode;
	class UMainHUD* MainHUD;
	class UCharacterHUD* CharacterHUD;
};
