// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryItemTile.h"
#include "InventoryItemDataTile.h"

void UInventoryItemTile::NativeConstruct()
{
	Super::NativeConstruct();

	m_IconImage = Cast<UImage>(GetWidgetFromName(TEXT("Icon")));
}

void UInventoryItemTile::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UInventoryItemTile::SetData(UObject* Data)
{
	UInventoryItemDataTile* InvenData = Cast<UInventoryItemDataTile>(Data);

	UTexture2D* IconTexture = LoadObject<UTexture2D>(nullptr, *InvenData->GetIconPath());

	InvenData->SetIconTexture(IconTexture);

	if (IconTexture)
		m_IconImage->SetBrushFromTexture(IconTexture);
}
