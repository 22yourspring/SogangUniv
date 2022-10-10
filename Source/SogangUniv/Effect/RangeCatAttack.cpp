// Fill out your copyright notice in the Description page of Project Settings.


#include "RangeCatAttack.h"
#include "NormalEffect.h"
#include "../Enemy/Enemy_RangeCat.h"

// Sets default values
ARangeCatAttack::ARangeCatAttack()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 저작권
	// static ConstructorHelpers::FObjectFinder<UParticleSystem>	ParticleAsset(TEXT("ParticleSystem'/Game/AdvancedMagicFX13/Particles/P_ky_stabShot.P_ky_stabShot'"));
	// if (ParticleAsset.Succeeded())
	// 	m_Particle->SetTemplate(ParticleAsset.Object);

	m_ParticleDistance = 1000.f;
}

// Called when the game starts or when spawned
void ARangeCatAttack::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARangeCatAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_ParticleDistance -= 200.f * DeltaTime;

	if (m_ParticleDistance <= 0.f)
		Destroy();
}

void ARangeCatAttack::StopEvent(const FHitResult& result)
{
	Super::StopEvent(result);

	FActorSpawnParameters	param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ANormalEffect* Effect = GetWorld()->SpawnActor<ANormalEffect>(ANormalEffect::StaticClass(), result.ImpactPoint, result.Normal.Rotation(), param);

	// 저작권
	Effect->SetActorScale3D(FVector(0.35f, 0.35f, 0.35f));
	// Effect->AsyncLoadParticle(TEXT("Async Particle Path::Enemy Hit Throw"));
	
	FVector Location = result.ImpactPoint;
	Location.Z += 25.f;
	Effect->SetActorLocation(Location);

	// 저작권
	// Effect->AsyncLoadSound(TEXT("Async Sound Path::Enemy Hit Throw"));

	m_Particle->DestroyComponent();

	// Damage
	FDamageEvent DmgEvent;
	float Damage = result.GetActor()->TakeDamage(GetOwner()->GetEnemyInfo().Attack, DmgEvent, GetOwner()->GetController(), this);
}
