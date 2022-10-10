// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDescCompleteListWidget.h"

void UQuestDescCompleteListWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_TypeText = Cast<UTextBlock>(GetWidgetFromName(TEXT("TypeText")));
	m_DestText = Cast<UTextBlock>(GetWidgetFromName(TEXT("DestText")));
	m_CountText = Cast<UTextBlock>(GetWidgetFromName(TEXT("CountText")));
}

void UQuestDescCompleteListWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}
