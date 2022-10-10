// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "InventoryList.h"
#include "../SogangUnivGameInstance.h"
#include "../Player/PlayerCharacter.h"
#include "InventoryTile.h"

void UMainMenuWidget::AddCoin(int32 coin)
{
	int32 currentCoin = FCString::Atoi(*m_pCoin->GetText().ToString());
	currentCoin += coin;
	m_pCoin->SetText(FText::AsNumber(currentCoin));

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst != nullptr)
	{
		FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");
		if (Info != nullptr)
		{
			Info->Coin = currentCoin;
		}
	}
	

}

void UMainMenuWidget::SubCoin(int32 coin)
{
	int32 currentCoin = FCString::Atoi(*m_pCoin->GetText().ToString());
	currentCoin -= coin;

	if (currentCoin < 0)
	{
		currentCoin = 0;
	}

	m_pCoin->SetText(FText::AsNumber(currentCoin));

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst != nullptr)
	{
		FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");
		if (Info != nullptr)
		{
			Info->Coin = currentCoin;
		}
	}

}

int32 UMainMenuWidget::GetCoin()
{
	int32 currentCoin = FCString::Atoi(*m_pCoin->GetText().ToString());
	return currentCoin;
}

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_InventoryButton = Cast<UButton>(GetWidgetFromName(TEXT("InventoryButton")));
	m_CharacterStateButton = Cast<UButton>(GetWidgetFromName(TEXT("CharacterStateButton")));
	m_QuestButton = Cast<UButton>(GetWidgetFromName(TEXT("QuestButton")));
	m_OptionButton = Cast<UButton>(GetWidgetFromName(TEXT("OptionButton")));
	m_pCoin = Cast<UTextBlock>(GetWidgetFromName(TEXT("textCoin")));

	m_InventoryButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnInventory);
	m_CharacterStateButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnCharacterState);
	m_QuestButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuest);

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst != nullptr)
	{
		FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");
		if (Info != nullptr)
		{
			m_pCoin->SetText(FText::AsNumber(Info->Coin));
		}
	}
}

void UMainMenuWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UMainMenuWidget::OnInventory()
{
	if (m_InventoryList->GetVisibility() == ESlateVisibility::Collapsed)
		m_InventoryList->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	else
		m_InventoryList->SetVisibility(ESlateVisibility::Collapsed);
}

void UMainMenuWidget::OnCharacterState()
{
	if (m_InventoryTile->GetVisibility() == ESlateVisibility::Collapsed)
		m_InventoryTile->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	else
		m_InventoryTile->SetVisibility(ESlateVisibility::Collapsed);
}

void UMainMenuWidget::OnQuest()
{
	if (m_Quest->GetVisibility() == ESlateVisibility::Visible)
	{
		m_Quest->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		m_Quest->SetQuestList();
		m_Quest->SetVisibility(ESlateVisibility::Visible);
	}
}
