// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "../SogangUnivGameInstance.h"
#include "EnemyAIController.h"
#include "EnemySpawnPoint.h"
#include "../UI/HPBar.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_SpawnPoint = nullptr;

	GetCapsuleComponent()->SetCollisionProfileName("Enemy");
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// In Game UI
	m_HPBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBar"));
	m_HPBar->SetupAttachment(GetMesh());

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	GetCharacterMovement()->MaxWalkSpeed = 400.f;

	m_AttackEnd = false;

	// 최초 0번은 SpawnPoint
	m_PatrolIndex = 1;

	GetMesh()->SetReceivesDecals(false);
	SetCanBeDamaged(true);

	// UI
	static ConstructorHelpers::FClassFinder<UUserWidget>	HPBarAsset(TEXT("WidgetBlueprint'/Game/UI/UI_HPBar.UI_HPBar_C'"));
	if (HPBarAsset.Succeeded())
	{
		m_HPBar->SetWidgetClass(HPBarAsset.Class);
		m_HPBar->SetWidgetSpace(EWidgetSpace::Screen);
		m_HPBar->SetDrawSize(FVector2D(200.f, 60.f));
		m_HPBar->SetRelativeLocation(FVector(0.f, 0.f, 220.f));
		m_HPBar->SetBlendMode(EWidgetBlendMode::Transparent);
	}
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst)
	{
		const FEnemyTableInfo* Info = GameInst->FindEnemyInfo(m_EnemyInfoName);

		if (Info)
		{
			m_EnemyInfo.Name = Info->Name;
			m_EnemyInfo.Attack = Info->Attack;
			m_EnemyInfo.Armor = Info->Armor;
			m_EnemyInfo.HP = Info->HP;
			m_EnemyInfo.HPMax = Info->HPMax;
			m_EnemyInfo.MP = Info->MP;
			m_EnemyInfo.MPMax = Info->MPMax;
			m_EnemyInfo.Level = Info->Level;
			m_EnemyInfo.Exp = Info->Exp;
			m_EnemyInfo.Coin = Info->Coin;
			m_EnemyInfo.AttackDistance = Info->AttackDistance;
			m_EnemyInfo.AttackSpeed = Info->AttackSpeed;
			m_EnemyInfo.AttackAngle = Info->AttackAngle;
			m_EnemyInfo.MoveSpeed = Info->MoveSpeed;
			m_EnemyInfo.TraceDistance = Info->TraceDistance;
		}
	}

	m_AnimInstance = Cast<UEnemyAnimInstance>(GetMesh()->GetAnimInstance());

	// UI
	m_HPBarWidget = Cast<UHPBar>(m_HPBar->GetWidget());

	m_HPBarWidget->SetDelegate<AEnemy>(this, &AEnemy::NameWidgetCallback);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

EEnemyAnimType AEnemy::GetAnimType() const
{
	return m_AnimInstance->GetAnimType();
}

void AEnemy::ChangeAnimType(EEnemyAnimType Type)
{
	m_AnimInstance->ChangeAnimType(Type);
}

float AEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	if (Damage == 0.f)
		return 0.f;

	Damage = Damage - m_EnemyInfo.Armor;
	Damage = Damage < 1.f ? 1.f : Damage;

	m_EnemyInfo.HP -= Damage;

	// Enemy Die
	if (m_EnemyInfo.HP <= 0)
	{
		m_AnimInstance->ChangeAnimType(EEnemyAnimType::Death);
		
		AEnemyAIController* EnemyController = Cast<AEnemyAIController>(GetController());
		if (EnemyController)
			EnemyController->BrainComponent->StopLogic(TEXT("Dead"));		
	}

	// In Game UI
	if (IsValid(m_HPBarWidget))
	{
		m_HPBarWidget->SetHPPercent(m_EnemyInfo.HP / (float)m_EnemyInfo.HPMax);
	}

	return Damage;
}

void AEnemy::Death()
{
	// Death Event
	// Effect or Item
	// Delete Object

	Destroy();
	m_SpawnPoint->Death();
}

void AEnemy::NormalAttack()
{
	
}

void AEnemy::NameWidgetCallback()
{
	m_HPBarWidget->SetName(m_EnemyInfo.Name);
}
