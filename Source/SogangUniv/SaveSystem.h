// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveSystem.generated.h"

/**
 * 
 */



	
USTRUCT()
struct FQuestingData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Path")
	FString m_questingData;
	UPROPERTY(EditAnywhere, Category = "Path")
	int64 m_timer;
	UPROPERTY(EditAnywhere, Category = "Path")
	int32 m_questingIndex;

	bool IsQuestingTimerOver()
	{
		if (m_timer < FDateTime::Now().GetTicks())
		{
			return true;
		}

		return false;
	}

};

UCLASS()
class SOGANGUNIV_API USaveSystem : public USaveGame
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	FString m_PlayerName;

	UPROPERTY()
	TMap<int32, FQusetPlayInfo> m_dailyQuestList;

	UPROPERTY()
	int32 m_day;

	UPROPERTY()
	int32 m_uniqueKey;

	UPROPERTY()
	TMap<int32, FQuestingData> m_questingList;

	UPROPERTY()
	int32 m_coin;

public:
	void SetPlayerName(const FString& name)
	{
		m_PlayerName = name;
	}

	const FString& GetPlayerName() const
	{
		return m_PlayerName;
	}
	
	void SetUniqueKey(int32 key)
	{
		m_uniqueKey = key;
	}
	
	const int32& GetUniqueKey() const
	{
		return m_uniqueKey;
	}

	void InsertDailyQuest(int32 key, FQusetPlayInfo value)
	{
		m_dailyQuestList.Add(key, value);
	}

	TMap<int32, FQusetPlayInfo>& GetQuestList()
	{
		return m_dailyQuestList;
	}

	FQusetPlayInfo* GetDailyQuest(int32 key)
	{
		return m_dailyQuestList.Find(key);
	}

	void SetDay(int32 day) { m_day = day; }
	int32 GetDay() const {  return m_day; }

	void AddQuestingData(int32 questIdx, const FQuestingData& data)
	{
		m_questingList.Add(questIdx, data);
	}

	TMap<int32, FQuestingData>& GetQuestingData()
	{
		return m_questingList;
	}
	
	void SetCoin(int32 coin)
	{
		m_coin = coin;
	}

	int32 GetCoin()
	{
		return m_coin;
	}
};
