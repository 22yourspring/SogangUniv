// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Engine/GameInstance.h"
//#include "../../Plugins/AwsDemo/Source/s3/Public/s3ClientObject.h"
#include "SogangUnivGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FEnemyTableInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString		Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Exp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Coin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		TraceDistance;
};

USTRUCT(BlueprintType)
struct FPlayerTableInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString		Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		uniqueKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Exp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Coin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		MoveSpeed;
};

UCLASS()
class SOGANGUNIV_API USogangUnivGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	USogangUnivGameInstance();

private:
	UPROPERTY()
	UDataTable*		m_EnemyInfoTable;

	UPROPERTY()
	UDataTable*		m_PlayerInfoTable;

	UPROPERTY()
	UDataTable*		m_UIItemInfoTable;

	UPROPERTY()
	UDataTable* m_QuestInfoTable;

	UPROPERTY()
	UDataTable* m_DailyQuestInfoTable;

	UPROPERTY()
	UDataTable* m_SensingQuestInfoTable;

	UPROPERTY()
	UDataTable* m_StretchingQuestInfoTable;

	TMap<FString, FQuestData> m_QuestComplete;
	
	UPROPERTY()
	bool m_NpcTrigger = false;

	UPROPERTY()
	NpcType m_npcType = NpcType::QUEST;

	UPROPERTY()
	TMap<int32, int32> percentList;

public:
	const TMap<FString, FQuestData>& GetQuestData()
	{
		return m_QuestComplete;
	}

	const FQuestData* FindQuestData(const FString& Name)
	{
		return m_QuestComplete.Find(Name);
	}
	
	void SetNPCTrigger(bool trigger)
	{
		m_NpcTrigger = trigger;
	}

	bool GetNPCTrigger()
	{
		return m_NpcTrigger;
	}

	void SetNPCType(NpcType type)
	{
		m_npcType = type;
	}

	NpcType GetNPCType()
	{
		return m_npcType;
	}

	TMap<int32, int32>& GetQuestPercentList()
	{
		percentList.Reset();

		for (size_t i = 1; i <= 3; i++)
		{
			percentList.Add(i, 2500);
		}

		for (size_t i = 4; i <= 9; i++)
		{
			percentList.Add(i, 416);
		}

		return percentList;
	}

	//UPROPERTY()
	//UAWSS3ClientObject*	m_awsObject;

public:
	virtual void Init();

public:
	const FEnemyTableInfo* FindEnemyInfo(const FString& Name);
	const FPlayerTableInfo* FindPlayerInfo(const FString& Name);
	const FUIItemTableInfo* FindUIItemInfo(const FString& Name);
	const FQuestTableInfo* FindQuestInfo(const FString& Name);
	const FQuestTableInfo* FindSensingQuestInfo(const FString& Name);
	const FQuestTableInfo* FindStretchingQuestInfo(const FString& Name);
	const FQuestTableInfo* FindQuestInfoByType(const FString& Name, EQuestType type);
	const int32 GetSensingQuestCount();
	const int32 GetStretchingQuestCount();
	FPlayerTableInfo* GetPlayerInfo(const FString& Name) { return m_PlayerInfoTable->FindRow<FPlayerTableInfo>(*Name, ""); }
};
