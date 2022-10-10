// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestWidget.h"
#include "QuestItemData.h"
#include "../SogangUnivGameInstance.h"
#include "QuestListeItemData.h"
#include "../SaveSystem.h"

void UQuestWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_CurrItem = nullptr;
	m_PrevItem = nullptr;


	//m_Menu = Cast<UTreeView>(GetWidgetFromName(TEXT("Tree")));

	/*m_Menu->OnItemClicked().AddUObject(this, &UQuestWidget::ItemClick);
	m_Menu->OnItemDoubleClicked().AddUObject(this, &UQuestWidget::ItemDoubleClick);
	m_Menu->OnItemIsHoveredChanged().AddUObject(this, &UQuestWidget::ItemHovered);

	m_Menu->SetOnGetItemChildren(this, &UQuestWidget::GetItemChildren);*/

	//List Temp

//	UQuestItemData* Data;

	/*Data = NewObject<UQuestItemData>(this, UQuestItemData::StaticClass());
	Data->SetNameText(TEXT("List of all Quests"));*/
	/*m_Menu->AddItem(Data);*/
	/*Data->CreateChildren(TEXT("Test All Quest1"));
	Data->CreateChildren(TEXT("Test All Quest2"));
	Data->CreateChildren(TEXT("Test All Quest3"));

	Data = NewObject<UQuestItemData>(this, UQuestItemData::StaticClass());
	Data->SetNameText(TEXT("Daily Quest List"));*/
	/*m_Menu->AddItem(Data);*/
	/*Data->CreateChildren(TEXT("Test Daily Quest1"));
	Data->CreateChildren(TEXT("Test Daily Quest2"));
	Data->CreateChildren(TEXT("Test Daily Quest3"));

	Data = NewObject<UQuestItemData>(this, UQuestItemData::StaticClass());
	Data->SetNameText(TEXT("Completed Quest List"));
	m_Menu->AddItem(Data);
	Data->CreateChildren(TEXT("Test Completed Quest1"));
	Data->CreateChildren(TEXT("Test Completed Quest2"));
	Data->CreateChildren(TEXT("Test Completed Quest3"));

	Data = NewObject<UQuestItemData>(this, UQuestItemData::StaticClass());
	Data->SetNameText(TEXT("Progress Quest List"));
	m_Menu->AddItem(Data);
	Data->CreateChildren(TEXT("Test Progress Quest1"));
	Data->CreateChildren(TEXT("Test Progress Quest2"));
	Data->CreateChildren(TEXT("Test Progress Quest3"));*/
	
	m_QuestList = Cast<UListView>(GetWidgetFromName(TEXT("QuestList")));
	m_QuestDesc = Cast<UQuestDescWidget>(GetWidgetFromName(TEXT("UI_QuestDesc")));


	/*FString ItemNameArray[7] =
	{
		TEXT("SM_MeatA"),
		TEXT("SM_Dried_fish"),
		TEXT("SM_Pan"),
		TEXT("SM_SpadA"),
		TEXT("SM_Bag_bread"),
		TEXT("SM_Baton_wood"),
		TEXT("SM_GrassA_Red"),
	};

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	for (int32 i = 0; i < 100; i++)
	{
		int32	Index = FMath::RandRange(0, 6);

		const FUIItemTableInfo* Info = GameInst->FindUIItemInfo(ItemNameArray[Index]);

		UInventoryItemDataList* Data = NewObject<UInventoryItemDataList>(this, UInventoryItemDataList::StaticClass());
		Data->SetNameText(Info->Name);
		Data->SetIconPath(Info->IconPath);
		Data->SetIndex(i);

		m_InventoryList->AddItem(Data);
	}*/
}

void UQuestWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

FReply UQuestWidget::NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseMove(InGeometry, InMouseEvent);

	return FReply::Handled();
}

void UQuestWidget::ItemDoubleClick(UObject* Data)
{
	
}

void UQuestWidget::ItemClick(UObject* Data)
{
	m_CurrItem = Cast<UQuestItemData>(Data);

	if (m_CurrItem)
	{
		m_CurrItem->Selection();

		if (m_PrevItem)
			m_PrevItem->UnSelection();
	}
	else if (m_CurrItem && m_PrevItem)
	{
		m_CurrItem->UnSelection();
		m_PrevItem->UnSelection();
	}

	m_PrevItem = m_CurrItem;
}

void UQuestWidget::ItemHovered(UObject* Data, bool Hovered)
{
	/*UQuestItemData* Item = Cast<UQuestItemData>(Data);

	if (Hovered)
		Item->Selection();

	else if (m_SelectItem != Item)
		Item->UnSelection();*/
}

void UQuestWidget::GetItemChildren(UObject* Data, TArray<UObject*>& ItemArray)
{ 
	UQuestItemData* Item = Cast<UQuestItemData>(Data);

	if (Item)
		ItemArray = Item->GetChildArray();
}

void UQuestWidget::QuestClick(UObject* Data)
{
	UQuestListeItemData* Info = Cast<UQuestListeItemData>(Data);

	if (Info)
	{
		m_QuestDesc->SetQuestName(m_QuestArray[Info->GetIndex()].Name);
		//m_QuestDesc->SetQuestDesc(m_QuestArray[Info->GetIndex()].QuestDesc);
	}	
}

void UQuestWidget::SetQuestList()
{
	m_QuestList->ClearListItems();

	FDateTime nowTime = FDateTime::Now();
	static int32 nowDay = nowTime.GetDay();

	USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));

	if (pLoadGame != nullptr)
	{
		if (pLoadGame->GetDay() == nowDay)
		{
			for (auto& quest : pLoadGame->GetQuestList())
			{
				FString strFinish;
				if (quest.Value.complete)
				{
					strFinish = TEXT("(완료)");
				}

				AddQuestItemData(quest.Key, quest.Value.value, strFinish);
			}
		}
		else
		{
			USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

			auto& percentList = GameInst->GetQuestPercentList();

			pLoadGame->SetDay(nowDay);

			int32 maxNum = 10000;

			for (size_t i = 0; i < 3; i++)
			{
				auto range = FMath::RandRange(1, maxNum);
				int32 accNum = 0;

				for (auto& percent : percentList)
				{
					accNum += percent.Value;

					if (range <= accNum)
					{
						FQusetPlayInfo info;
						info.complete = false;


						maxNum -= percent.Value;

						const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(percent.Key));

						int32 questValue = 0;

						if (Info->Type == EQuestType::SENSING)
						{
							questValue = FMath::RandRange(1, GameInst->GetSensingQuestCount());
						}
						else if (Info->Type == EQuestType::STRETCHING)
						{
							questValue = FMath::RandRange(1, GameInst->GetStretchingQuestCount());
						}

						info.value = questValue;
						pLoadGame->InsertDailyQuest(percent.Key, info);

						AddQuestItemData(percent.Key, questValue);
						percentList.Remove(percent.Key);
						break;

					}
				}
			}

			FQusetPlayInfo info;
			info.complete = false;
			info.value = 0;
			pLoadGame->InsertDailyQuest(10, info);
			AddQuestItemData(10, 0);

			UGameplayStatics::SaveGameToSlot(pLoadGame, "Save0", 0);
		}
	}
}

void UQuestWidget::AddQuestItemData(int questKey, int questValue, FString strFinish)
{
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
	const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(questKey));
	UQuestListeItemData* QuestItemData = NewObject<UQuestListeItemData>(this, UQuestListeItemData::StaticClass());
	if (Info->Type == EQuestType::SENSING)
	{
		auto info = GameInst->FindSensingQuestInfo(FString::FromInt(questValue));

		if (info != nullptr)
		{
			FString Name = info->Name;
			QuestItemData->SetQuestName(Name + strFinish);
		}
	}
	else
	{
		QuestItemData->SetQuestName(Info->Name + strFinish);
	}

	QuestItemData->SetIndex(0);
	QuestItemData->SetQuestName(Info->Name + strFinish);

	m_QuestList->AddItem(QuestItemData);

}