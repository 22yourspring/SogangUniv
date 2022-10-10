// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalTrigger.h"
#include "../Effect/NPCTriggerEffect.h"

// Sets default values
APortalTrigger::APortalTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APortalTrigger::BeginPlay()
{
	Super::BeginPlay();

	m_TriggerBeginDelegate.AddDynamic(this, &APortalTrigger::TriggerBegin);
	m_TriggerEndDelegate.AddDynamic(this, &APortalTrigger::TriggerEnd);

	// Particle
	FActorSpawnParameters	param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	UWorld* MyWorld = GetWorld();
	FString CurrentMapName = MyWorld->GetMapName();

	// ÀúÀÛ±Ç
	/*if (CurrentMapName == TEXT("UEDPIE_0_Sapphire") || CurrentMapName == TEXT("Sapphire"))
	{
		ANPCTriggerEffect* NPC_Trigger_Effect = GetWorld()->SpawnActor<ANPCTriggerEffect>(ANPCTriggerEffect::StaticClass(), FVector(4915.0f, 350.0f, -320.0f), FRotator::ZeroRotator, param);
		NPC_Trigger_Effect->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
	}
	else if (CurrentMapName == TEXT("UEDPIE_0_QuestRoom") || CurrentMapName == TEXT("QuestRoom"))
	{
		ANPCTriggerEffect* NPC_Trigger_Effect = GetWorld()->SpawnActor<ANPCTriggerEffect>(ANPCTriggerEffect::StaticClass(), FVector(-1260.0f, -180.0f, 180.0f), FRotator::ZeroRotator, param);
		NPC_Trigger_Effect->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
	}*/
}

// Called every frame
void APortalTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

void APortalTrigger::TriggerBegin()
{
	PrintViewPort(1.f, FColor::Orange, TEXT("Portal Trigger In"));

	UWorld* MyWorld = GetWorld();
	FString CurrentMapName = MyWorld->GetMapName();

	if (CurrentMapName == TEXT("UEDPIE_0_Sapphire") || CurrentMapName == TEXT("Sapphire"))
	{
		UGameplayStatics::OpenLevel(GetWorld(), TEXT("QuestRoom"));
	}
	else if (CurrentMapName == TEXT("UEDPIE_0_QuestRoom") || CurrentMapName == TEXT("QuestRoom"))
	{
		UGameplayStatics::OpenLevel(GetWorld(), TEXT("Sapphire"));
	}
}

void APortalTrigger::TriggerEnd()
{
	PrintViewPort(1.f, FColor::Orange, TEXT("Portal Trigger Exit"));
}


