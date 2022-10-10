// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterSelectState.h"

void UCharacterSelectState::NativeConstruct()
{
	Super::NativeConstruct();

	m_CharacterImage = Cast<UImage>(GetWidgetFromName(TEXT("CharacterImage")));
	m_NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Name")));
	m_LevelText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Level")));
	m_CoinText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Coin")));
	m_HPText = Cast<UTextBlock>(GetWidgetFromName(TEXT("HP")));
	m_MPText = Cast<UTextBlock>(GetWidgetFromName(TEXT("MP")));
}

void UCharacterSelectState::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UCharacterSelectState::SetImageMaterial(UMaterialInterface* Material)
{
	m_CharacterImage->SetBrushFromMaterial(Material);
}