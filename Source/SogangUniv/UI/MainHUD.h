// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "CharacterHUD.h"
#include "MainMenuWidget.h"
#include "InventoryList.h"
#include "InventoryTile.h"
#include "QuestWidget.h"
#include "QuestNPCWidget.h"
#include "ShopWidget.h"
#include "Blueprint/UserWidget.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UMainHUD : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UCharacterHUD*	m_CharacterHUD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UMainMenuWidget* m_MainMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UInventoryList* m_InventoryList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UInventoryTile* m_InventoryTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UQuestWidget*	m_Quest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UQuestNPCWidget* m_pQuestNPC;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UShopWidget* m_pShopNPC;

public:
	UCharacterHUD* GetCharacterHUD() { return m_CharacterHUD; }
	UMainMenuWidget* GetMainMenu() { return m_MainMenu; }
	UInventoryList* GetInventoryList() { return m_InventoryList; }
	UQuestNPCWidget* GetQuestNPC() { return m_pQuestNPC; }
	UShopWidget* GetShopNPC() { return m_pShopNPC; }
protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
};
