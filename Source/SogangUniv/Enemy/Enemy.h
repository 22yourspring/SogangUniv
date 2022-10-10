// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/WidgetComponent.h"
#include "EnemyAnimInstance.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

USTRUCT(BlueprintType)
struct FEnemyInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString		Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Exp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Coin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		TraceDistance;
};

UCLASS()
class SOGANGUNIV_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FEnemyInfo		m_EnemyInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* m_HPBar;

	class UHPBar* m_HPBarWidget;

	class AEnemySpawnPoint*		m_SpawnPoint;

	FString		m_EnemyInfoName;

	class UEnemyAnimInstance*	m_AnimInstance;

	bool	m_AttackEnd;

public:
	TArray<FVector>		m_PatrolArray;
	int32				m_PatrolIndex;

public:
	UEnemyAnimInstance* GetAnimInstance() { return m_AnimInstance; }

public:
	FVector GetPatrolPoint() 
	{ 
		if (m_PatrolIndex >= m_PatrolArray.Num())
			m_PatrolIndex = 0;

		return m_PatrolArray[m_PatrolIndex]; 
	}

	void NextPatrolPoint()
	{ 
		++m_PatrolIndex; 

		if (m_PatrolIndex >= m_PatrolArray.Num())
			m_PatrolIndex = 0;
	}

	EEnemyAnimType GetAnimType() const;

	bool GetAttackEnd() { return m_AttackEnd; }
	void SetAttackEnd(bool AttackEnd) { m_AttackEnd = AttackEnd; }

	void ChangeAnimType(EEnemyAnimType Type);

	void SetSpawnPoint(class AEnemySpawnPoint* SpawnPoint) { m_SpawnPoint = SpawnPoint; }

	FEnemyInfo& GetEnemyInfo() { return m_EnemyInfo; }

	void AddPatrolPoint(const FVector& Point) { m_PatrolArray.Add(Point); }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);


public:
	void Death();

public:
	virtual void NormalAttack();

public:
	UFUNCTION()
	void NameWidgetCallback();
};