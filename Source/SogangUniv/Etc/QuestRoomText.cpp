// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestRoomText.h"

// Sets default values
AQuestRoomText::AQuestRoomText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Billboard = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("Billboard"));
	m_Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	SetRootComponent(m_Billboard);
	m_Text->SetupAttachment(m_Billboard);
	m_Text->SetRelativeLocation(FVector(0.f, 100.f, 50.f));
	m_Text->SetText(TEXT("Quest Room is here"));

	static ConstructorHelpers::FObjectFinder<UMaterial> MtrlAsset(TEXT("Material'/Game/Etc/Arrow_Mat.Arrow_Mat'"));
	if (MtrlAsset.Succeeded())
	{
		m_Billboard->AddElement(MtrlAsset.Object, nullptr, false, 30.f, 30.f, nullptr);
		/*m_Billboard->SetMaterial(0, MtrlAsset.Object);
		m_Billboard->CreateDynamicMaterialInstance(0);*/
	}

}

// Called when the game starts or when spawned
void AQuestRoomText::BeginPlay()
{
	Super::BeginPlay();

	m_Material = m_Billboard->CreateDynamicMaterialInstance(0);
}

// Called every frame
void AQuestRoomText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

