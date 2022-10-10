// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "QuestListeItemData.generated.h"


UCLASS(BlueprintType)
class SOGANGUNIV_API UQuestListeItemData : public UObject
{
	GENERATED_BODY()

public:
	UQuestListeItemData();

private:
	FString m_Name;
	int32 m_Index;
	int32 m_questID;
	int32 m_subQuestID;
	int32 m_reward;
	EQuestType m_questType;
	EQuestScriptType m_questScriptType;
	EQuestButtonType m_questButtonType;
	int32 m_timer;

public:
	void SetIndex(int32 Index)
	{
		m_Index = Index;
	}
	
	

	void SetQuestName(const FString& Name)
	{
		m_Name = Name;
	}

	int GetIndex()
	{
		return m_Index;
	}

	void SetReward(int32 Index)
	{
		m_reward = Index;
	}

	int32 GetReward()
	{
		return m_reward;
	}

	const FString& GetQuestName() const
	{
		return m_Name;
	}

	void SetQuestID(int32 id)
	{
		m_questID = id;
	}

	int32 GetQuestID()
	{
		return m_questID;
	}
	
	void SetSubQuestID(int32 id)
	{
		m_subQuestID = id;
	}

	int32 GetSubQuestID()
	{
		return m_subQuestID;
	}
	
	void SetTimer(int32 minute)
	{
		m_timer = minute;
	}

	int32 GetTimer()
	{
		return m_timer;
	}

	void SetQuestButtonType(EQuestButtonType type)
	{
		m_questButtonType = type;
	}

	EQuestButtonType GetQuestButtonType()
	{
		return m_questButtonType;
	}
	
	void SetQuestScriptType(EQuestScriptType type)
	{
		m_questScriptType = type;
	}

	EQuestScriptType GetQuestScriptType()
	{
		return m_questScriptType;
	}
	
	void SetQuestType(EQuestType type)
	{
		m_questType = type;
	}

	EQuestType GetQuestType()
	{
		return m_questType;
	}
};