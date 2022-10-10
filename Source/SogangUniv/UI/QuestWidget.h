// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "QuestDescWidget.h"
#include "Components/TreeView.h"
#include "Components/ListView.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "QuestWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTreeView* m_Menu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UQuestDescWidget* m_QuestDesc; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UListView* m_QuestList;

	TArray<FQuestTableInfo> m_QuestArray;

public:
	class UQuestItemData*		m_CurrItem;
	class UQuestItemData*		m_PrevItem;

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);

public:
	UFUNCTION()
	void ItemDoubleClick(UObject* Data);

	UFUNCTION()
	void ItemClick(UObject* Data);

	UFUNCTION()
	void ItemHovered(UObject* Data, bool Hovered);
	
	UFUNCTION()
	void GetItemChildren(UObject* Data, TArray<UObject*>& ItemArray);
	
	UFUNCTION()	
	void QuestClick(UObject* Data);

	UFUNCTION()
	void SetQuestList();

	UFUNCTION()
	void AddQuestItemData(int questKey, int questValue, FString strFinish = "");

};
