// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestItemData.h"
#include "QuestItem.h"

UQuestItemData::UQuestItemData()
{
	m_TreeLevel = 0;
}

void UQuestItemData::Selection()
{
	m_LinkItem->Selection();
}

void UQuestItemData::UnSelection()
{
	m_LinkItem->UnSelection();
}

void UQuestItemData::CreateChildren(const FString& Name)
{
	UQuestItemData* Child = NewObject<UQuestItemData>(this, UQuestItemData::StaticClass());

	Child->SetTreeLevel(m_TreeLevel + 1);
	// Child->m_NameText = FString::Printf(TEXT("Child%d-%d"), m_TreeLevel, i);
	Child->m_NameText = Name;
	Child->SetParent(this);

	m_ChildArray.Add(Child);
}