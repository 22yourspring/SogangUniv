// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_MeleeCat.h"
#include "../Effect/NormalEffect.h"

// Sets default values
AEnemy_MeleeCat::AEnemy_MeleeCat()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	MeshAsset(TEXT("SkeletalMesh'/Game/Pspsps_Cat/Meshes/SM_Chibi_Cat.SM_Chibi_Cat'"));	
	if (MeshAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>	AnimAsset(TEXT("AnimBlueprint'/Game/Enemy/BPEnemyMeleeAnim.BPEnemyMeleeAnim_C'"));
	if (AnimAsset.Succeeded())
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);

	m_EnemyInfoName = TEXT("MeleeCat");
}

// Called when the game starts or when spawned
void AEnemy_MeleeCat::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemy_MeleeCat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy_MeleeCat::NormalAttack()
{
	// 	//Target Damage ���
	// 
	// 	//FDamageEvent DmgEvent;
	// 	//float Damage = TakeDamage(m_EnemyInfo.Attack, DmgEvent, GetController(), this);
	// 
	// 	// Hit Effect
	// 
	// 	FVector EnemyLoc = GetActorLocation();
	// 	FVector Forward = GetActorForwardVector();
	// 
	// 	FCollisionQueryParams		params(NAME_None, false, this);
	// 
	// 	// ���� �������� �ش� Ÿ�ֿ̹� �浹ó��
	// 	FHitResult result;
	// 
	// 	bool Swepp = GetWorld()->SweepSingleByChannel(result,
	// 		EnemyLoc, EnemyLoc + Forward * m_EnemyInfo.AttackDistance,
	// 		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel8, FCollisionShape::MakeSphere(30.f /*������*/),
	// 		params);
	// 
	// 
	// #if ENABLE_DRAW_DEBUG
	// 	FColor DrawColor = Swepp ? FColor::Red : FColor::Green;
	// 	FString CollisionState = Swepp ? TEXT("Enemy collision is Conflict") : TEXT("Enemy collision is Nonconflict");
	// 
	// 	PrintViewPort(1.f, DrawColor, CollisionState);
	// 
	// 	FVector Center = EnemyLoc + Forward * m_EnemyInfo.AttackDistance * 0.5f;
	// 	DrawDebugCapsule(GetWorld(), Center, m_EnemyInfo.AttackDistance * 0.5f, 30.f, FRotationMatrix::MakeFromZ(Forward).ToQuat(), DrawColor, false, 0.5f);
	// 
	// #endif	
	// 
	// 	if (Swepp)
	// 	{
	// 		FActorSpawnParameters	param;
	// 		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	// 
	// 		FHitResult LineResult;
	// 		bool Collision = GetWorld()->LineTraceSingleByChannel(LineResult, result.ImpactPoint,
	// 			result.ImpactPoint + GetActorUpVector() * -300.f, ECC_GameTraceChannel6, params);
	// 
	// 		if (Collision)	// Asset ���� �浹�� ���Ͼ
	// 		{
	// 			ANormalEffect* Effect = GetWorld()->SpawnActor<ANormalEffect>(ANormalEffect::StaticClass(), LineResult.ImpactPoint, FRotator::ZeroRotator, param);
	// 
	// 			// ���۱�
	// 			// Asset Loading
	// 			Effect->SetActorScale3D(FVector(0.35f, 0.35f, 0.35f));
	// 			// Effect->LoadParticle(TEXT("ParticleSystem'/Game/AdvancedMagicFX12/particles/P_ky_hit_fire.P_ky_hit_fire'"));
	// 			Effect->AsyncLoadParticle(TEXT("Async Particle Path::Enemy Hit Melee"));
	// 			// ���۱�
	// 			// Sounds Loading
	// 			// Effect->LoadSound(TEXT("SoundWave'/Game/Sound/water-step-01.water-step-01'"));
	// 			Effect->AsyncLoadSound(TEXT("Async Sound Path::Enemy Hit Melee"));
	// 
	// 		}
	// 
	// 		// Damage
	// 		FDamageEvent DmgEvent;
	// 		float Damage = result.GetActor()->TakeDamage(m_EnemyInfo.Attack, DmgEvent, GetController(), this);
	// 	}
}