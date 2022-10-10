// Fill out your copyright notice in the Description page of Project Settings.


#include "ShopWidget.h"
#include "../SogangUnivGameModeBase.h"
#include "../UI/MainHUD.h"


void UShopWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_pDesc = Cast<UTextBlock>(GetWidgetFromName(TEXT("QuestDescText")));
	m_pMsg = Cast<UTextBlock>(GetWidgetFromName(TEXT("cookieMsg")));
	m_pNext = Cast<UButton>(GetWidgetFromName(TEXT("Button_67")));

}

void UShopWidget::SetRender(bool render)
{
	if (GetVisibility() == ESlateVisibility::Visible)
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		SetVisibility(ESlateVisibility::Visible);
		m_pDesc->SetVisibility(ESlateVisibility::Visible);
		m_pMsg->SetVisibility(ESlateVisibility::Hidden);
		m_pNext->SetVisibility(ESlateVisibility::Visible);
	}
}

bool UShopWidget::Buy(int32 cost)
{
	ASogangUnivGameModeBase* pGameMode = Cast<ASogangUnivGameModeBase>(GetWorld()->GetAuthGameMode());

	if (IsValid(pGameMode))
	{
		UMainHUD* pMainHUD = pGameMode->GetMainHUD();

		if (IsValid(pMainHUD))
		{
			if (pMainHUD->GetMainMenu()->GetCoin() >= cost)
			{
				pMainHUD->GetMainMenu()->SubCoin(cost);
				return true;
			}
			
		}
	}

	return false;
}
