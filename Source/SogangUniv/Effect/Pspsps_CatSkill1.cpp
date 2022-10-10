// Fill out your copyright notice in the Description page of Project Settings.


#include "Pspsps_CatSkill1.h"
#include "NormalEffect.h"
#include "Pspsps_CatSkill1Decal.h"
#include "../Effect/HitCameraShake.h"

// Sets default values
APspsps_CatSkill1::APspsps_CatSkill1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	m_Particle->SetupAttachment(m_Mesh);

	// 저작권
	// static ConstructorHelpers::FObjectFinder<UParticleSystem>		Asset(TEXT("ParticleSystem'/Game/AdvancedMagicFX12/particles/P_ky_trail_shineDust.P_ky_trail_shineDust'"));
	// if (Asset.Succeeded())
	// 	m_Particle->SetTemplate(Asset.Object);

	isBounced = false;
}

// Called when the game starts or when spawned
void APspsps_CatSkill1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APspsps_CatSkill1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!m_DestroyEnable)
		m_Mesh->AddRelativeRotation(FRotator(0.f, 0.f, -540.f * DeltaTime));
}

void APspsps_CatSkill1::StopEvent(const FHitResult& result)
{
	Super::StopEvent(result);

	FActorSpawnParameters	param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ANormalEffect* Effect = GetWorld()->SpawnActor<ANormalEffect>(ANormalEffect::StaticClass(), result.ImpactPoint, result.ImpactNormal.Rotation(), param);

	// 저작권
	// Effect->AsyncLoadParticle(TEXT("Async Particle Path::Player Hit Throw"));
	// Effect->AsyncLoadSound(TEXT("Async Sound Path::Player Hit Throw"));


	// 이펙트 소멸
	// m_Particle->DestroyComponent();
	
	// 충돌시 Decal Spawn
	FCollisionQueryParams	params(NAME_None, false, this);

	FHitResult LineResult;
	bool Collision = GetWorld()->LineTraceSingleByChannel(LineResult, GetActorLocation(),
		GetActorLocation() + GetActorUpVector() * -300.f, ECC_GameTraceChannel6, params);

	if (Collision)
	{
		FActorSpawnParameters	param1;
		param1.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		APspsps_CatSkill1Decal* Decal = GetWorld()->SpawnActor<APspsps_CatSkill1Decal>(APspsps_CatSkill1Decal::StaticClass(), LineResult.ImpactPoint, FRotator::ZeroRotator, param1);
		
		// Camera Shake
		GetWorld()->GetFirstPlayerController()->ClientPlayCameraShake(UHitCameraShake::StaticClass());
	}
}

void APspsps_CatSkill1::BounceEvent(const FHitResult& result, const FVector& ImpactVelocity)
{
	Super::BounceEvent(result, ImpactVelocity);

	if (isBounced)
		return;
	
	isBounced = true;

	FActorSpawnParameters	param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ANormalEffect* Effect = GetWorld()->SpawnActor<ANormalEffect>(ANormalEffect::StaticClass(), result.ImpactPoint, result.ImpactNormal.Rotation(), param);

	// 저작권
	// Effect->AsyncLoadParticle(TEXT("Async Particle Path::Player Hit Throw"));
	// Effect->AsyncLoadSound(TEXT("Async Sound Path::Player Hit Throw"));


	// 이펙트 소멸
	// m_Particle->DestroyComponent();
	
	// 충돌시 Decal Spawn
	FCollisionQueryParams	params(NAME_None, false, this);

	FHitResult LineResult;
	bool Collision = GetWorld()->LineTraceSingleByChannel(LineResult, GetActorLocation(),
		GetActorLocation() + GetActorUpVector() * -300.f, ECC_GameTraceChannel6, params);

	if (Collision)	// Asset 사용시 충돌이 안일어남
	{
		FActorSpawnParameters	param1;
		param1.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		APspsps_CatSkill1Decal* Decal = GetWorld()->SpawnActor<APspsps_CatSkill1Decal>(APspsps_CatSkill1Decal::StaticClass(), LineResult.ImpactPoint, FRotator::ZeroRotator, param1);

		// Camera Shake
		GetWorld()->GetFirstPlayerController()->ClientPlayCameraShake(UHitCameraShake::StaticClass());
	}
}