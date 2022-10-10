// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "QuestItemData.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestItemData : public UObject
{
	GENERATED_BODY()

public:
	UQuestItemData();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString m_NameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<UObject*>	m_ChildArray;

	UQuestItemData*		m_Parent;

	int32	m_Index;
	int32	m_TreeLevel;

	class UQuestItem*	m_LinkItem;

public:
	void SetNameText(const FString& NameText) { m_NameText = NameText; }
	FString GetNameText() { return m_NameText; }

	void SetTreeLevel(int32 TreeLevel) { m_TreeLevel = TreeLevel; }
	int32 GetTreeLevel() const { return m_TreeLevel; }

	void SetParent(UQuestItemData* Parent) { m_Parent = Parent; }
	UQuestItemData* GetParent() { return m_Parent; }

	TArray<UObject*>& GetChildArray() { return m_ChildArray; }

	void SetLinkItem(class UQuestItem* Item) { m_LinkItem = Item; }
	UQuestItem* GetLinkItem() { return m_LinkItem; }

	void Selection();
	void UnSelection();

public:
	void CreateChildren(const FString& Name);
};
