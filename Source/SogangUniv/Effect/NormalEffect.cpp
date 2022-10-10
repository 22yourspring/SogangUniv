// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalEffect.h"
#include "../AssetManager/AssetPathMain.h"

// Sets default values
ANormalEffect::ANormalEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));

	SetRootComponent(m_ParticleSystem);
	
	m_AssetLoop = false;
}

// Called when the game starts or when spawned
void ANormalEffect::BeginPlay()
{
	Super::BeginPlay();
	
	if (!m_AssetLoop)
		m_ParticleSystem->OnSystemFinished.AddDynamic(this, &ANormalEffect::ParticleFinish);
}

// Called every frame
void ANormalEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANormalEffect::LoadParticle(const FString& Path)
{
	UParticleSystem* Particle = LoadObject<UParticleSystem>(GetWorld(), *Path);

	if (Particle)
		m_ParticleSystem->SetTemplate(Particle);
}

void ANormalEffect::LoadSound(const FString& Path)
{
	USoundBase* Sound = LoadObject<USoundBase>(nullptr, *Path);

	if (Sound)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetActorLocation());
}

void ANormalEffect::AsyncLoadParticle(const FString& Name)
{
	UAssetPathMain* AssetPath = UAssetPathMain::StaticClass()->GetDefaultObject<UAssetPathMain>();
	const FSoftObjectPath* Path = AssetPath->FindParticlePath(Name);

	if (!Path)
		return;

	m_AsyncParticlePath = *Path;
	FStreamableManager& StreamMgr = UAssetManager::GetStreamableManager();

	m_AsyncParticleLoadHandle = StreamMgr.RequestAsyncLoad(m_AsyncParticlePath, FStreamableDelegate::CreateUObject(this, &ANormalEffect::AsyncLoadParticleComplete));
}

void ANormalEffect::AsyncLoadParticleComplete()
{
	m_AsyncParticleLoadHandle->ReleaseHandle();

	TAssetPtr<UParticleSystem>	Async_Particle(m_AsyncParticlePath);

	if (Async_Particle)
		m_ParticleSystem->SetTemplate(Async_Particle.Get());
}

void ANormalEffect::AsyncLoadSound(const FString& Name)
{
	UAssetPathMain* AssetPath = UAssetPathMain::StaticClass()->GetDefaultObject<UAssetPathMain>();
	const FSoftObjectPath* Path = AssetPath->FindSoundPath(Name);

	if (!Path)
		return;

	m_AsyncSoundPath = *Path;
	FStreamableManager& StreamMgr = UAssetManager::GetStreamableManager();

	m_AsyncSoundLoadHandle = StreamMgr.RequestAsyncLoad(m_AsyncSoundPath, FStreamableDelegate::CreateUObject(this, &ANormalEffect::AsyncLoadSoundComplete));

}

void ANormalEffect::AsyncLoadSoundComplete()
{
	m_AsyncSoundLoadHandle->ReleaseHandle();

	TAssetPtr<USoundBase>	Async_Sound(m_AsyncSoundPath);

	if (Async_Sound)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Async_Sound.Get(), GetActorLocation());
}

void ANormalEffect::ParticleFinish(UParticleSystemComponent* Particle)
{
	Destroy();
}