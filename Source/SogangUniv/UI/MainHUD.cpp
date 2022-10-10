// Fill out your copyright notice in the Description page of Project Settings.
#include "MainHUD.h"
#include "../Effect/QuestRoomDecal.h"

void UMainHUD::NativeConstruct()
{
	Super::NativeConstruct();

	m_CharacterHUD = Cast<UCharacterHUD>(GetWidgetFromName(TEXT("UI_CharacterHUD")));
	m_MainMenu = Cast<UMainMenuWidget>(GetWidgetFromName(TEXT("UI_MainMenu")));

	m_InventoryList = Cast<UInventoryList>(GetWidgetFromName(TEXT("UI_InventoryList")));
	m_InventoryTile = Cast<UInventoryTile>(GetWidgetFromName(TEXT("UI_InventoryTile")));
	m_Quest = Cast<UQuestWidget>(GetWidgetFromName(TEXT("UI_QuestWidget")));

	m_pQuestNPC = Cast<UQuestNPCWidget>(GetWidgetFromName(TEXT("UI_QuestNPC")));
	m_pShopNPC = Cast<UShopWidget>(GetWidgetFromName(TEXT("UI_Shop")));

	m_MainMenu->SetInventoryList(m_InventoryList);
	m_MainMenu->SetInventoryTile(m_InventoryTile);
	m_MainMenu->SetQuest(m_Quest);


	// Quest Room Dynamic Instance Error 임시방편
	FActorSpawnParameters	param1;
	param1.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AQuestRoomDecal* QuestDecal = GetWorld()->SpawnActor<AQuestRoomDecal>(AQuestRoomDecal::StaticClass(), FVector(4915.0f, 350.0f, -340.0f), FRotator::ZeroRotator, param1);
	QuestDecal->GetDecalComponent()->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
	QuestDecal->SetActorScale3D(FVector(0.5f, 0.65f, 0.65f));

	AQuestRoomDecal* ExitDecal = GetWorld()->SpawnActor<AQuestRoomDecal>(AQuestRoomDecal::StaticClass(), FVector(-1260.0f, -180.0f, 180.0f), FRotator::ZeroRotator, param1);
	ExitDecal->GetDecalComponent()->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
	ExitDecal->SetActorScale3D(FVector(0.5f, 0.65f, 0.65f));
}

void UMainHUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}
