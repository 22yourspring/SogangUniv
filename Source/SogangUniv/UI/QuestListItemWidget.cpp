// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestListItemWidget.h"

void UQuestListItemWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("NameText")));
}

void UQuestListItemWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UQuestListItemWidget::SetData(UObject* Data)
{
	UQuestListeItemData* Item = Cast<UQuestListeItemData>(Data);

	m_NameText->SetText(FText::FromString(Item->GetQuestName()));
}