// Fill out your copyright notice in the Description page of Project Settings.


#include "SogangUnivGameInstance.h"

USogangUnivGameInstance::USogangUnivGameInstance()
{
	static ConstructorHelpers::FObjectFinder<UDataTable>	EnemyInfoTableAsset(TEXT("DataTable'/Game/Enemy/DTEnemyInfo.DTEnemyInfo'"));
	if (EnemyInfoTableAsset.Succeeded())
		m_EnemyInfoTable = EnemyInfoTableAsset.Object;

	static ConstructorHelpers::FObjectFinder<UDataTable>	PlayerInfoTableAsset(TEXT("DataTable'/Game/Player/DTPlayerInfo.DTPlayerInfo'"));
	if (PlayerInfoTableAsset.Succeeded())
		m_PlayerInfoTable = PlayerInfoTableAsset.Object;

	static ConstructorHelpers::FObjectFinder<UDataTable>	UIItemInfoTableAsset(TEXT("DataTable'/Game/UI/DTUIItemInfo.DTUIItemInfo'"));
	if (UIItemInfoTableAsset.Succeeded())
		m_UIItemInfoTable = UIItemInfoTableAsset.Object;

	static ConstructorHelpers::FObjectFinder<UDataTable>	QuestInfoTableAsset(TEXT("DataTable'/Game/UI/DTQuest.DTQuest'"));
	if (QuestInfoTableAsset.Succeeded())
		m_QuestInfoTable = QuestInfoTableAsset.Object;

	static ConstructorHelpers::FObjectFinder<UDataTable>	StretchingQuestInfoTableAsset(TEXT("DataTable'/Game/UI/DTStretchingQuest.DTStretchingQuest'"));
	if (StretchingQuestInfoTableAsset.Succeeded())
		m_StretchingQuestInfoTable = StretchingQuestInfoTableAsset.Object;

	static ConstructorHelpers::FObjectFinder<UDataTable>	SensingQuestInfoTableAsset(TEXT("DataTable'/Game/UI/DTSensingQuest.DTSensingQuest'"));
	if (SensingQuestInfoTableAsset.Succeeded())
		m_SensingQuestInfoTable = SensingQuestInfoTableAsset.Object;
}

void USogangUnivGameInstance::Init()
{
	Super::Init();

	FQuestData Data;
	FString QuestName = "Quest";
	for (int i = 1; i <= 3; i++)
	{
		
		Data.Name = QuestName + FString::FromInt(i);
		Data.Complete = false;
		Data.CompleteArray.Add(false);

		m_QuestComplete.Add(Data.Name, Data);

	}
}

const FEnemyTableInfo* USogangUnivGameInstance::FindEnemyInfo(const FString& Name)
{
	return m_EnemyInfoTable->FindRow<FEnemyTableInfo>(*Name, "");
}

const FPlayerTableInfo* USogangUnivGameInstance::FindPlayerInfo(const FString& Name)
{
	return m_PlayerInfoTable->FindRow<FPlayerTableInfo>(*Name, "");
}

const FUIItemTableInfo* USogangUnivGameInstance::FindUIItemInfo(const FString& Name)
{
	return m_UIItemInfoTable->FindRow<FUIItemTableInfo>(*Name, "");
}

const FQuestTableInfo* USogangUnivGameInstance::FindQuestInfo(const FString& Name)
{ 
	return m_QuestInfoTable->FindRow<FQuestTableInfo>(*Name, "");
}

const FQuestTableInfo* USogangUnivGameInstance::FindSensingQuestInfo(const FString& Name)
{
	return m_SensingQuestInfoTable->FindRow<FQuestTableInfo>(*Name, "");
}

const FQuestTableInfo* USogangUnivGameInstance::FindStretchingQuestInfo(const FString& Name)
{
	return m_StretchingQuestInfoTable->FindRow<FQuestTableInfo>(*Name, "");
}

const FQuestTableInfo* USogangUnivGameInstance::FindQuestInfoByType(const FString& Name, EQuestType type)
{
	switch (type)
	{
	case EQuestType::SENSING:
		return FindSensingQuestInfo(Name);
		break;
	case EQuestType::NORMAL:
		return FindQuestInfo(Name);
		break;
	case EQuestType::STRETCHING:
		return FindStretchingQuestInfo(Name);
		break;
	default:
		break;
	}

	return FindQuestInfo(Name);
}

const int32 USogangUnivGameInstance::GetSensingQuestCount()
{
	return m_SensingQuestInfoTable->GetRowNames().Num();
}

const int32 USogangUnivGameInstance::GetStretchingQuestCount()
{
	return m_StretchingQuestInfoTable->GetRowNames().Num();
}
