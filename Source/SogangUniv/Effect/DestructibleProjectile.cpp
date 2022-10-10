// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructibleProjectile.h"
#include "NormalEffect.h"

// Sets default values
ADestructibleProjectile::ADestructibleProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Body = CreateDefaultSubobject<UBoxComponent>(TEXT("Body"));
	m_Mesh = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Mesh"));
	m_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));

	SetRootComponent(m_Body);

	m_Mesh->SetupAttachment(m_Body);

	m_Movement->SetUpdatedComponent(m_Body);

	m_Movement->InitialSpeed = 1000.f;
	m_Movement->Velocity.Z = 0.5f;

	m_DestroyEnable = false;
	m_DestroyTime = 0.f;
	m_DestroyTimeMax = 180.f;

	m_Mesh->SetReceivesDecals(false);
}

// Called when the game starts or when spawned
void ADestructibleProjectile::BeginPlay()
{
	Super::BeginPlay();
	
//	m_Movement->OnProjectileStop.AddDynamic(this, &ADestructibleProjectile::ProjectileStop);
	m_Movement->OnProjectileBounce.AddDynamic(this, &ADestructibleProjectile::ProjectileBounce);
}

// Called every frame
void ADestructibleProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_DestroyEnable)
	{
		m_DestroyTime += DeltaTime;

		if (m_DestroyTimeMax < m_DestroyTime)
		{
			Destroy();		

#if ENABLE_DRAW_DEBUG
			PrintViewPort(1.f, FColor::Red, TEXT("Destroy Time Test"));
#endif

		}
	}
}

void ADestructibleProjectile::ProjectileStop(const FHitResult& result)
{
	StopEvent(result);

#if ENABLE_DRAW_DEBUG
	PrintViewPort(1.f, FColor::Red, TEXT("Projectile Stop Event Test"));
#endif
}

void ADestructibleProjectile::ProjectileBounce(const FHitResult& result, const FVector& ImpactVelocity)
{
	BounceEvent(result, ImpactVelocity);

#if ENABLE_DRAW_DEBUG
	PrintViewPort(1.f, FColor::Red, TEXT("Projectile Bounce Event Test"));
#endif
}

void ADestructibleProjectile::StopEvent(const FHitResult& result)
{
	m_Mesh->ApplyDamage(500.f, result.ImpactPoint, result.ImpactNormal, 1.f);

	m_DestroyEnable = true;
}

void ADestructibleProjectile::BounceEvent(const FHitResult& result, const FVector& ImpactVelocity)
{
	m_Mesh->ApplyDamage(500.f, result.ImpactPoint, result.ImpactNormal, 1.f);

	m_DestroyEnable = true;
}