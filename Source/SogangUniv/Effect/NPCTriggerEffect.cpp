// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCTriggerEffect.h"

// Sets default values
ANPCTriggerEffect::ANPCTriggerEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Body = CreateDefaultSubobject<USphereComponent>(TEXT("Body"));
	m_Particle = CreateDefaultSubobject<UParticleSystemComponent>("Particle");

	SetRootComponent(m_Body);
	m_Particle->SetupAttachment(m_Body);

	// ¿˙¿€±«
	//static ConstructorHelpers::FObjectFinder<UParticleSystem>	ParticleAsset(TEXT("ParticleSystem'/Game/AdvancedMagicFX13/Particles/P_ky_auroraAura.P_ky_auroraAura'"));
	//if (ParticleAsset.Succeeded())
	//	m_Particle->SetTemplate(ParticleAsset.Object);

	m_Body->SetCollisionProfileName(TEXT("PlayerTrigger"));
}

// Called when the game starts or when spawned
void ANPCTriggerEffect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCTriggerEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

