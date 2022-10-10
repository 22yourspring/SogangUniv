// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestItem.h"
#include "QuestItemData.h"
#include "Components/CanvasPanelSlot.h"

void UQuestItem::Selection()
{
	m_Selection->SetOpacity(1.f);
}

void UQuestItem::UnSelection()
{
	m_Selection->SetOpacity(0.f);
}

void UQuestItem::NativeConstruct()
{
	Super::NativeConstruct();

	m_NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("NameText")));
	m_Selection = Cast<UImage>(GetWidgetFromName(TEXT("Selection")));
}

void UQuestItem::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UQuestItem::SetData(UObject* Data)
{
	UQuestItemData* Item = Cast<UQuestItemData>(Data);

	Item->SetLinkItem(this);

	m_NameText->SetText(FText::FromString(Item->GetNameText()));

	UCanvasPanelSlot* PanelSlot;
	
	// Item Name
	PanelSlot = Cast<UCanvasPanelSlot>(m_NameText->Slot);
	if (PanelSlot)
		PanelSlot->SetPosition(FVector2D(Item->GetTreeLevel() * 50.f, 0.f));
	
	// Selection Pocus
	PanelSlot = Cast<UCanvasPanelSlot>(m_Selection->Slot);
	if (PanelSlot)
		PanelSlot->SetPosition(FVector2D(Item->GetTreeLevel() * 50.f, 0.f));
}
