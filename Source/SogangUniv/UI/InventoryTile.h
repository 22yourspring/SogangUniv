// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/TileView.h"
#include "Components/CanvasPanel.h"
#include "InventoryItemTile.h"
#include "InventoryItemDataTile.h"
#include "ItemDescWidget.h"
#include "Blueprint/UserWidget.h"
#include "InventoryTile.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UInventoryTile : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTileView* m_InventoryTile;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTileView* m_InventorySlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UItemDescWidget* m_ItemDescWidget;

	TArray<UObject*>	m_SlotArray;

	int32	m_ItemCount;
	bool	m_MouseHovered;

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);

public:
	UFUNCTION()
	void ItemClick(UObject* Data);

	UFUNCTION()
	void ItemDoubleClick(UObject* Data);
	
	UFUNCTION()
	void ItemScroll(UObject* Data, UUserWidget* Widget);

	UFUNCTION()
	void ItemHovered(UObject* Data, bool Hovered);
};
