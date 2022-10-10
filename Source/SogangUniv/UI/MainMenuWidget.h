// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_InventoryButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_CharacterStateButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_QuestButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_OptionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_pCoin;

	class UInventoryList*		m_InventoryList;
	class UInventoryTile*		m_InventoryTile;
	class UQuestWidget*			m_Quest;

public:
	void SetInventoryList(class UInventoryList* List) { m_InventoryList = List; }
	void SetInventoryTile(class UInventoryTile* Tile) { m_InventoryTile = Tile; }
	void SetQuest(class UQuestWidget* Quest) { m_Quest = Quest; }
	void AddCoin(int32 coin);
	void SubCoin(int32 coin);
	int32 GetCoin();
protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	UFUNCTION()
	void OnInventory();

	UFUNCTION()
	void OnCharacterState();

	UFUNCTION()
	void OnQuest();
};
