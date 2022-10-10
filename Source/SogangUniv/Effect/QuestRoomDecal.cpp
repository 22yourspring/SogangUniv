// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestRoomDecal.h"

// Sets default values
AQuestRoomDecal::AQuestRoomDecal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UMaterialInstance>		DecalMtrlAsset(TEXT("MaterialInstanceConstant'/Game/Etc/MT_QuestRoomEnter_Inst.MT_QuestRoomEnter_Inst'"));

	if (DecalMtrlAsset.Succeeded())
		m_Decal->SetDecalMaterial(DecalMtrlAsset.Object);

	m_Material = m_Decal->CreateDynamicMaterialInstance();

	m_Glow = 3.f;
	m_Dir = 1.f;
}

// Called when the game starts or when spawned
void AQuestRoomDecal::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame3.f
void AQuestRoomDecal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_Glow += m_Dir * DeltaTime * 1.5f;

	if (m_Glow >= 3.f)
	{
		m_Glow = 3.f;
		m_Dir = -1.f;
	}
	else if (m_Glow <= 1.f)
	{
		m_Glow = 1.f;
		m_Dir = 1.f;
	}

	m_Material->SetScalarParameterValue(TEXT("Glow"), m_Glow);

	AddActorWorldRotation(FRotator(0.f, 180.f * DeltaTime * 0.5f, 0.f));

	// Spawn은 DynamicMaterialInstance 특성상 Main에서 Static Class로 생성
}

/*
	FActorSpawnParameters	param1;
	param1.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AQuestRoomDecal* QuestDecal = GetWorld()->SpawnActor<AQuestRoomDecal>(AQuestRoomDecal::StaticClass(), FVector(4890.0f, 330.0f, -340.0f), FRotator::ZeroRotator, param1);
	QuestDecal->GetDecalComponent()->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
	QuestDecal->SetActorScale3D(FVector(0.3f, 0.65f, 0.65f));
*/