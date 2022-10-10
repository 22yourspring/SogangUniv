// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestNPCWidget.h"
#include "../SogangUnivGameInstance.h"
#include "../SogangUnivGameModeBase.h"
#include "../UI/QuestListeItemData.h"
#include "../UI/MainHUD.h"
#include "../Network/NetworkSession.h"
#include "../Network/NetworkManager.h"
#include "../Network/PacketStream.h"
#include "PixelFormat.h"
#include "RHI.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "RenderUtils.h"
#include "Engine/Texture2D.h"
#include "Math/UnrealMathUtility.h"
#include "../SaveSystem.h"
#include "../Player/PlayerCharacter.h"

void UQuestNPCWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_pList = Cast<UListView>(GetWidgetFromName(TEXT("QuestList")));
	m_pDesc = Cast<UTextBlock>(GetWidgetFromName(TEXT("QuestDescText")));
	m_pImageSendPanel = Cast<UCanvasPanel>(GetWidgetFromName(TEXT("CanvasPanel_115")));
	m_pImage = Cast<UImage>(GetWidgetFromName(TEXT("Image_1")));
	m_pImageSendButton = Cast<UButton>(GetWidgetFromName(TEXT("Button")));
	m_pEditBox = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("InputText")));

	m_pSleepPanel = Cast<UCanvasPanel>(GetWidgetFromName(TEXT("CanvasPanel_138")));
	m_pStartClock = Cast<UComboBoxString>(GetWidgetFromName(TEXT("Clock")));
	m_pStartMinute = Cast<UComboBoxString>(GetWidgetFromName(TEXT("Minute")));
	
	m_pEndClock = Cast<UComboBoxString>(GetWidgetFromName(TEXT("Clock_1")));
	m_pEndMinute = Cast<UComboBoxString>(GetWidgetFromName(TEXT("Minute_1")));

	m_pSleepTimeName = Cast<UTextBlock>(GetWidgetFromName(TEXT("TextBlock_241")));
	m_defaultDesc = m_pDesc->GetText().ToString();

	m_pList->OnItemClicked().AddUObject(this, &UQuestNPCWidget::ItemClick);

	for (int i = 0; i < 60; ++i)
	{
		m_pStartMinute->AddOption(FString::FromInt(i));
		m_pEndMinute->AddOption(FString::FromInt(i));
	}

	for (int i = 0; i < 24; ++i)
	{
		m_pStartClock->AddOption(FString::FromInt(i));
		m_pEndClock->AddOption(FString::FromInt(i));
	}

	m_imageIndex = 0;
	m_imagePathList.SetNum(2);
}

void UQuestNPCWidget::ItemClick(UObject* Data)
{
	if (m_pEditBox->GetVisibility() == ESlateVisibility::Visible && m_pEditBox->GetText().IsEmpty())
	{
		return;
	}
	PrintViewPort(1.f, FColor::Orange, TEXT("ItemClick"));
	m_pList->ClearListItems();
	UQuestListeItemData* pItemData = Cast<UQuestListeItemData>(Data);
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
	if (nullptr != pItemData && nullptr != GameInst)
	{
		m_pImageSendPanel->SetVisibility(ESlateVisibility::Hidden);
		m_pImage->SetVisibility(ESlateVisibility::Hidden);
		m_pImageSendButton->SetVisibility(ESlateVisibility::Hidden);
		m_pEditBox->SetVisibility(ESlateVisibility::Hidden);

		PrintViewPort(1.f, FColor::Orange, TEXT("quest ID : "));
		PrintViewPort(1.f, FColor::Orange, FString::FromInt(pItemData->GetQuestID()));

		int32 questIndex = 0;

		int descIndex = pItemData->GetIndex();

		if (pItemData->GetQuestType() == EQuestType::STRETCHING)
		{
			//const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(pItemData->GetQuestID()));

			questIndex = pItemData->GetSubQuestID();

			PrintViewPort(1.f, FColor::Orange, FString::FromInt(questIndex));

			const FQuestTableInfo* Info = GameInst->FindStretchingQuestInfo(FString::FromInt(questIndex));

			if (Info != nullptr)
			{
				const TCHAR* path = *(Info->InfoArray[0].DescImagePath);

				UTexture2D* stretchingTexture = LoadObject<UTexture2D>(nullptr, path);
				m_pImage->SetBrushFromTexture(stretchingTexture);
			}


			m_pImageSendPanel->SetVisibility(ESlateVisibility::Visible);
			m_pImage->SetVisibility(ESlateVisibility::Visible);
			m_pImageSendButton->SetVisibility(ESlateVisibility::Hidden);

		}
		else if (pItemData->GetQuestType() == EQuestType::SENSING)
		{
			questIndex = pItemData->GetSubQuestID();
		}
		else if (pItemData->GetQuestType() == EQuestType::SLEEP)
		{
			questIndex = pItemData->GetQuestID();
			if (pItemData->GetQuestButtonType() != EQuestButtonType::NEXT)
			{
				m_pSleepPanel->SetVisibility(ESlateVisibility::Visible);
				m_pStartClock->SetSelectedOption(TEXT("0"));
				m_pStartMinute->SetSelectedOption(TEXT("0"));
				m_pEndClock->SetSelectedOption(TEXT("0"));
				m_pEndMinute->SetSelectedOption(TEXT("0"));
			}
		}
		else
		{
			questIndex = pItemData->GetQuestID();
		}

		if (pItemData->GetQuestButtonType() == EQuestButtonType::EXIT)
		{
			SetVisibility(ESlateVisibility::Hidden);
			return;
		}
		else if (pItemData->GetQuestButtonType() == EQuestButtonType::QUESTING)
		{
			USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));

			int32 questID = pItemData->GetQuestID();

			auto dailyQuest = pLoadGame->GetDailyQuest(questID);
			if (dailyQuest != nullptr)
			{
				dailyQuest->complete = true;
			}

			if (!m_pEditBox->GetText().IsEmpty())
			{
				FDateTime nowTime = FDateTime::Now();
				FTimespan timespan(nowTime.GetTicks() + FTimespan::FromMinutes(30.0).GetTicks());

				FQuestingData data;
				data.m_questingData = m_pEditBox->GetText().ToString();
				data.m_timer = timespan.GetTicks();
				data.m_questingIndex = descIndex;
				pLoadGame->AddQuestingData(pItemData->GetQuestID(), data);
			}
			else if (pItemData->GetQuestType() == EQuestType::SLEEP)
			{
				FString strTime;

				strTime += m_pStartClock->GetSelectedOption();
				strTime += TEXT("/");
				strTime += m_pStartMinute->GetSelectedOption();
				strTime += TEXT("/");
				strTime += m_pEndClock->GetSelectedOption();
				strTime += TEXT("/");
				strTime += m_pEndMinute->GetSelectedOption();

				FQuestingData data;
				data.m_questingData = strTime;
				data.m_questingIndex = descIndex;
				pLoadGame->AddQuestingData(pItemData->GetQuestID(), data);
			}

			UGameplayStatics::SaveGameToSlot(pLoadGame, "Save0", 0);

			SetVisibility(ESlateVisibility::Hidden);
			return;
		}
		else if (pItemData->GetQuestButtonType() == EQuestButtonType::REWARD)
		{
			int32 questID = pItemData->GetQuestID();
			bool addData = false;

			FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");

			ASogangUnivGameModeBase* pGameMode = Cast<ASogangUnivGameModeBase>(GetWorld()->GetAuthGameMode());

			if (IsValid(pGameMode))
			{
				UMainHUD* pMainHUD = pGameMode->GetMainHUD();

				if (IsValid(pMainHUD))
				{
					pMainHUD->GetMainMenu()->AddCoin(pItemData->GetReward());
					Info->Coin = pMainHUD->GetMainMenu()->GetCoin();
				}
			}

			PacketStream	stream;
			uint8 Packet[PACKET_SIZE];

			stream.SetBuffer(Packet);

			NetworkSession* Session = NetworkManager::GetInst()->GetSession();
			stream.Write(&questID, 4);

			wchar_t questData[50];

			USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));
			auto dailyQuest = pLoadGame->GetDailyQuest(questID);
			if (dailyQuest != nullptr)
			{
				dailyQuest->complete = true;
			}

			auto dataList = pLoadGame->GetQuestingData();

			auto pQuestingData = pLoadGame->GetQuestingData().Find(questID);

			if (!m_pEditBox->GetText().IsEmpty())
			{
				addData = true;
				stream.Write(&addData, 1);

				wcscpy(questData, TCHAR_TO_WCHAR(*m_pEditBox->GetText().ToString()));
				stream.Write(questData, 100);
			}
			else if (pQuestingData != nullptr)
			{
				if (pQuestingData->IsQuestingTimerOver())
				{
					addData = true;
					stream.Write(&addData, 1);

					wcscpy(questData, TCHAR_TO_WCHAR(*pQuestingData->m_questingData));
					stream.Write(questData, 100);
				}
				dataList.Remove(questID);
			}
			pLoadGame->SetCoin(pItemData->GetReward());
			UGameplayStatics::SaveGameToSlot(pLoadGame, "Save0", 0);

			Session->Write((int)NetworkProtocol::QuestComplete, stream.GetLength(), Packet);

			NativePushImagePath(questID);

			SetVisibility(ESlateVisibility::Hidden);
			return;
		}
		else if (pItemData->GetQuestButtonType() == EQuestButtonType::COMPLETE)
		{
			bool addData = false;

			int32 questID = pItemData->GetQuestID();
			const FQuestTableInfo* Info = GameInst->FindQuestInfoByType(FString::FromInt(questIndex), pItemData->GetQuestType());

			PrintViewPort(1.f, FColor::Orange, TEXT("questIndex : "));
			PrintViewPort(1.f, FColor::Orange, FString::FromInt(questIndex));
			PrintViewPort(1.f, FColor::Orange, TEXT("pItemData->GetSubQuestID() : "));
			PrintViewPort(1.f, FColor::Orange, FString::FromInt(pItemData->GetSubQuestID()));
			USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));
			auto dailyQuest = pLoadGame->GetDailyQuest(questID);
			if (dailyQuest != nullptr)
			{
				dailyQuest->complete = true;
				UGameplayStatics::SaveGameToSlot(pLoadGame, "Save0", 0);
			}

			PacketStream	stream;
			uint8 Packet[PACKET_SIZE];

			stream.SetBuffer(Packet);

			NetworkSession* Session = NetworkManager::GetInst()->GetSession();
			stream.Write(&questID, 4);

			wchar_t questData[50];

			auto dataList = pLoadGame->GetQuestingData();

			auto pQuestingData = pLoadGame->GetQuestingData().Find(questID);

			if (questID == 2)
			{
				addData = true;
				stream.Write(&addData, 1);

				wcscpy(questData, TCHAR_TO_WCHAR(*Info->Name));
				stream.Write(questData, 100);
			}
			else if (!m_pEditBox->GetText().IsEmpty())
			{
				addData = true;
				stream.Write(&addData, 1);

				wcscpy(questData, TCHAR_TO_WCHAR(*m_pEditBox->GetText().ToString()));
				stream.Write(questData, 100);
			}
			else if (pQuestingData != nullptr)
			{
				addData = true;
				stream.Write(&addData, 1);

				pQuestingData->m_questingData = m_pStartClock->GetSelectedOption();
				pQuestingData->m_questingData += TEXT(":");
				pQuestingData->m_questingData += m_pStartMinute->GetSelectedOption();
				pQuestingData->m_questingData += TEXT("~");
				pQuestingData->m_questingData += m_pEndClock->GetSelectedOption();
				pQuestingData->m_questingData += TEXT(":");
				pQuestingData->m_questingData += m_pEndMinute->GetSelectedOption();


				wcscpy(questData, TCHAR_TO_WCHAR(*pQuestingData->m_questingData));
				stream.Write(questData, 100);

				dataList.Remove(questID);
			}

			Session->Write((int)NetworkProtocol::QuestComplete, stream.GetLength(), Packet);


			NativePushImagePath(questID);

			SetVisibility(ESlateVisibility::Hidden);
			return;
		}
		else if (pItemData->GetQuestButtonType() == EQuestButtonType::NEXT	&& pItemData->GetQuestType() == EQuestType::SLEEP)
		{
			USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));
			auto pQuestingData = pLoadGame->GetQuestingData().Find(pItemData->GetQuestID());

			if (pQuestingData != nullptr)
			{
				const TCHAR* delims[] = { TEXT("/") };

				TArray<FString> descList;
				pQuestingData->m_questingData.ParseIntoArray(descList, delims, 1);

				if (descList.Num() >= 4)
				{
					int32 todayStartClock = FCString::Atoi(*m_pStartClock->GetSelectedOption());
					int32 todayEndClock = FCString::Atoi(*m_pEndClock->GetSelectedOption());
					int32 todayStartMinute = FCString::Atoi(*m_pStartMinute->GetSelectedOption());
					int32 todayEndMinute = FCString::Atoi(*m_pEndMinute->GetSelectedOption());

					if (todayStartClock == FCString::Atoi(*descList[0]) && todayStartMinute == FCString::Atoi(*descList[1])
						&& todayEndClock == FCString::Atoi(*descList[2]) && todayEndMinute == FCString::Atoi(*descList[3]))
					{
						descIndex = 2;
					}
					else
					{
						int32 todayDiffTime;
						
						todayDiffTime = todayEndMinute - todayStartMinute;

						if (todayStartClock > todayEndClock)
						{
							todayEndClock += 24;
						}

						todayDiffTime += (todayEndClock - todayStartClock) * 60;

						int32 goalDiffTime;
						int32 endClock = FCString::Atoi(*descList[2]);
						goalDiffTime = FCString::Atoi(*descList[3]) - FCString::Atoi(*descList[1]);

						if (FCString::Atoi(*descList[0]) > FCString::Atoi(*descList[2]))
						{
							endClock += 24;
						}

						goalDiffTime += endClock - FCString::Atoi(*descList[0]) * 60;

						if (todayDiffTime > goalDiffTime)
						{
							descIndex = 3;
						}
						else if (todayDiffTime < goalDiffTime)
						{
							descIndex = 4;
						}
						else if (todayDiffTime == goalDiffTime)
						{
							descIndex = 5;
						}
					}
				}
			}
		}

		const FQuestTableInfo* Info = GameInst->FindQuestInfoByType(FString::FromInt(questIndex), pItemData->GetQuestType());

		if (Info == nullptr)
		{
			PrintViewPort(1.f, FColor::Orange, TEXT("Info == nullptr"));
			return;
		}


		PrintViewPort(1.f, FColor::Orange, TEXT("descIndex : "));
		PrintViewPort(1.f, FColor::Orange, FString::FromInt(descIndex));

		if (Info->InfoArray.Num() <= descIndex)
		{
			SetVisibility(ESlateVisibility::Hidden);
			PrintViewPort(1.f, FColor::Orange, TEXT("Info->InfoArray.Num() <= 0 || Info->InfoArray.Num() <= descIndex"));
			return;
		}

		const FQuestInfo& questInfo = Info->InfoArray[descIndex];
		//UKismetSystemLibrary::MakeLiteralString();
		//m_pDesc->SetText(FText::FromString(questInfo.Desc));

		//FString tempString = L"안녕하세요. 하이루" ;

		//FString secondString243 = FString::Printf(TEXT("안녕"));
		const TCHAR* delims[] = { TEXT("\\n") };

		TArray<FString> descList;
		//questInfo.Desc.ParseIntoArray(descList, L"\n");
		questInfo.Desc.ParseIntoArray(descList, delims, 1);

		FString descString;

		for (int i = 0; i < descList.Num(); ++i)
		{
			descString += FString::Printf(TEXT("%s"), *descList[i]);
			descString += FString::Printf(TEXT("\n"));
		}

		const TCHAR* delims2[] = { TEXT("@") };

		TArray<FString> descList2;
		descString.ParseIntoArray(descList2, delims2, 1);

		FString descString2;

		APlayerCharacter* Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

		for (int i = 0; i < descList2.Num(); ++i)
		{
			descString2 += FString::Printf(TEXT("%s"), *descList2[i]);

			if (Player != nullptr && i < (descList2.Num() - 1))
			{
				descString2 += Player->GetPlayerInfo().Name;
			}
		}

		m_pDesc->SetText(FText::FromString(descString2));


		if (questInfo.Type == EQuestScriptType::IMAGE_SEND_1)
		{
			m_pImageSendPanel->SetVisibility(ESlateVisibility::Visible);
			m_pImage->SetVisibility(ESlateVisibility::Visible);
			m_pImageSendButton->SetVisibility(ESlateVisibility::Visible);
			m_imageIndex = 1;
		}
		else if (questInfo.Type == EQuestScriptType::IMAGE_SEND)
		{
			m_pImageSendPanel->SetVisibility(ESlateVisibility::Visible);
			m_pImage->SetVisibility(ESlateVisibility::Visible);
			m_pImageSendButton->SetVisibility(ESlateVisibility::Visible);

			m_imageIndex = 0;
		}
		else if (questInfo.Type == EQuestScriptType::WRITE)
		{
			m_pEditBox->SetVisibility(ESlateVisibility::Visible);
		}

		for (int i = 0; i < questInfo.m_ButtonList.Num(); ++i)
		{
			if (questInfo.m_ButtonList[i].m_type != EQuestButtonType::NONE)
				AddListItemByName(questInfo.m_ButtonList[i].m_name, pItemData->GetQuestID(), pItemData->GetSubQuestID(), questInfo.m_ButtonList[i].m_index, questInfo.m_ButtonList[i].m_type, questInfo.Type, questInfo.m_ButtonList[i].m_reward, questInfo.m_ButtonList[i].m_timer);
		}
	}
	else
	{
		PrintViewPort(1.f, FColor::Orange, TEXT("nullptr != pItemData && nullptr != GameInst No"));
	}
}

void UQuestNPCWidget::SetRender(bool render)
{
	m_pImageSendPanel->SetVisibility(ESlateVisibility::Hidden);
	m_pImage->SetVisibility(ESlateVisibility::Hidden);
	m_pImageSendButton->SetVisibility(ESlateVisibility::Hidden);
	m_pSleepPanel->SetVisibility(ESlateVisibility::Hidden);
	m_pEditBox->SetVisibility(ESlateVisibility::Hidden);
	m_pEditBox->SetText(FText::FromString(""));
	m_imageIndex = -1;

	FDateTime nowTime = FDateTime::Now();
	static int32 nowDay = nowTime.GetDay();

	PrintViewPort(1.f, FColor::Orange, FString::FromInt(nowDay));
	if (GetVisibility() == ESlateVisibility::Visible)
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		m_pDesc->SetText(FText::FromString(m_defaultDesc));

		m_pList->ClearListItems();
		
		USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));

		if (pLoadGame != nullptr)
		{
			USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

			if (pLoadGame->GetDay() == nowDay)
			{
				for (auto& quest : pLoadGame->GetQuestList())
				{
					if (quest.Value.complete)
					{
						continue;
					}

					AddListItemByID(quest.Key, quest.Value.value);
				}
			}
			else
			{
				auto& percentList = GameInst->GetQuestPercentList();

				pLoadGame->SetDay(nowDay);

				int32 maxNum = 10000;
				size_t i = 0;
				for (; i < 3;)
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

							int32 key = percent.Key;

							const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(key));
							percentList.Remove(key);
							auto pData = pLoadGame->GetQuestingData().Find(key);

							if (pData != nullptr)
							{
								continue;
							}

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
							pLoadGame->InsertDailyQuest(key, info);

							AddListItemByID(key, questValue);
							
							++i;

							break;

						}
					}
				}

				FQusetPlayInfo info;
				info.complete = false;
				info.value = 0;
				pLoadGame->InsertDailyQuest(10, info);
				AddListItemByID(10, 0);

				UGameplayStatics::SaveGameToSlot(pLoadGame, "Save0", 0);
			}

			m_pSleepTimeName->SetText(FText::FromString(TEXT("목표시간")));

			for (int i = 1; i < 10; ++i)
			{
				auto pData = pLoadGame->GetQuestingData().Find(i);

				if (pData != nullptr)
				{
					const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(i));

					if (Info->Type == EQuestType::SLEEP)
					{
						if (pLoadGame->GetDay() != nowDay)
						{
							m_pSleepTimeName->SetText(FText::FromString(TEXT("취침 및 기상시간")));
							AddListItemByID(i, 1, pData->m_questingIndex);
						}
					}
					else
					{
						FTimespan timerspan(pData->m_timer - nowTime.GetTicks());
						if (timerspan.GetTicks() <= 0)
						{
							AddListItemByID(i, 1, pData->m_questingIndex);
						}
					}
				}
			}

		}

		SetVisibility(ESlateVisibility::Visible);
	}
}

void UQuestNPCWidget::AddListItemByID(int questID, int questValue, int index)
{
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst)
	{
		UQuestListeItemData* QuestItemData = NewObject<UQuestListeItemData>(this, UQuestListeItemData::StaticClass());

		const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(questID));

		if (Info->Type == EQuestType::SENSING)
		{
			auto info = GameInst->FindSensingQuestInfo(FString::FromInt(questValue));

			if (info != nullptr)
			{
				FString Name = info->Name;
				QuestItemData->SetQuestName(Name);
			}
		}
		else
		{
			QuestItemData->SetQuestName(Info->Name);
		}

		QuestItemData->SetQuestID(questID);
		QuestItemData->SetSubQuestID(questValue);

		if (index == -1)
		{
			QuestItemData->SetIndex(0);
		}
		else
		{
			QuestItemData->SetIndex(index);
		}
		QuestItemData->SetReward(0);
		QuestItemData->SetTimer(0);
		QuestItemData->SetQuestType(Info->Type);
		QuestItemData->SetQuestScriptType(Info->InfoArray[0].Type);
		QuestItemData->SetQuestButtonType(EQuestButtonType::NONE);
		m_pList->AddItem(QuestItemData);
	}
}

void UQuestNPCWidget::AddListItemByName(const FString& name, int questID, int subQuestId, int index, EQuestButtonType type, EQuestScriptType scriptType, int32 reward, int32 timer)
{
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst)
	{
		const FQuestTableInfo* Info = GameInst->FindQuestInfo(FString::FromInt(questID));
		UQuestListeItemData* QuestItemData = NewObject<UQuestListeItemData>(this, UQuestListeItemData::StaticClass());
		QuestItemData->SetQuestName(name);
		QuestItemData->SetQuestID(questID);
		QuestItemData->SetSubQuestID(subQuestId);
		QuestItemData->SetIndex(index);
		QuestItemData->SetReward(reward);
		QuestItemData->SetTimer(timer);
		QuestItemData->SetQuestType(Info->Type);
		QuestItemData->SetQuestScriptType(scriptType);
		QuestItemData->SetQuestButtonType(type);
		m_pList->AddItem(QuestItemData);
	}
}

void UQuestNPCWidget::AddImagePath(FString path)
{
	if (m_imageIndex >= 2)
		m_imageIndex = 1;

	if (m_imageIndex < 0)
	{
		return;
	}

	m_imagePathList[m_imageIndex] = path;
}

void UQuestNPCWidget::NativePushImagePath(int32 questID)
{
	FDateTime nowTime = FDateTime::Now();

	FString imageName;
	switch (questID)
	{
	case 4:
		imageName = "hobby/";
		break;

	case 6:
		imageName = "clean/";
		break;

	case 7:
		imageName = "food/";
		break;

	case 8:
		imageName = "book/";
		break;

	case 10:
		imageName = "diary/";
		break;
	}

	imageName += FDateTime::Now().GetDate().ToString();
	imageName += "/";
	FString strExt;

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
	FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");

	imageName += FString::FromInt(Info->uniqueKey);

	FString putImageName = imageName;

	for (int i = 0; i < (m_imageIndex + 1); ++i)
	{
		if ((m_imageIndex + 1) >= 2)
		{
			FString addImage = "_";

			if (i == 0)
			{
				addImage += "first";
			}
			else if (i == 1)
			{
				addImage += "second";
			}
			putImageName = imageName + addImage;
		}

		if (m_imagePathList[i].Find(TEXT("jpg")) != -1)
		{
			strExt = TEXT(".jpg");
		}
		else if (m_imagePathList[i].Find(TEXT("png")) != -1)
		{
			strExt = TEXT(".png");
		}
		else
		{
			PrintViewPort(10.f, FColor::Orange, "정의되지 않은 확장자입니다.");
			continue;
		}
		PushImagePath(m_imagePathList[i], putImageName + strExt);
	}
}

UTexture2D* UQuestNPCWidget::LoadImageFromDisk(UObject* Outer, const FString& ImagePath, TArray<uint8>& FileData, FString& outPath)
{
	FString testPath = ImagePath;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageFromDisk"));

	int searchIdx = testPath.Find(TEXT("jpg"));

	if (searchIdx != -1)
	{
		testPath.RemoveAt(searchIdx + 3, testPath.Len() - (searchIdx + 2));
	}
	else
	{
		searchIdx = testPath.Find(TEXT("png"));
		if (searchIdx != -1)
		{
			testPath.RemoveAt(searchIdx + 3, testPath.Len() - (searchIdx + 2));
		}
	}

	// Check if the file exists first
	if (!FPaths::FileExists(testPath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FileExists No!!"));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, testPath);

		if (!FPaths::FileExists(testPath))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FileExists No2!!"));

			return nullptr;
		}
	}
	outPath = testPath;
	// Load the compressed byte data from the file

	if (!FFileHelper::LoadFileToArray(FileData, *testPath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadFileToArray Fail"));
		return nullptr;
	}

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(TEXT("ImageWrapper"));

	// Detect the image type using the ImageWrapper module
	EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(FileData.GetData(), FileData.Num());
	if (ImageFormat == EImageFormat::Invalid)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ImageFormat == EImageFormat::Invalid"));

		return nullptr;
	}

	// Create an image wrapper for the detected image format
	IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
	if (!ImageWrapper.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("!ImageWrapper.IsValid()"));

		return nullptr;
	}

	// Decompress the image data
	TArray<uint8> RawData;
	ImageWrapper->SetCompressed(FileData.GetData(), FileData.Num());
	ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, RawData);
	if (RawData.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("RawData.Num()"));
		return nullptr;
	}

	// Create the texture and upload the uncompressed image data
	FString TextureBaseName = TEXT("Texture_") + FPaths::GetBaseFilename(testPath);
	return CreateTexture(Outer, RawData, ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), EPixelFormat::PF_B8G8R8A8, FName(*TextureBaseName));
}

UTexture2D* UQuestNPCWidget::CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat InFormat, FName BaseName)
{
	// Shamelessly copied from UTexture2D::CreateTransient with a few modifications
	if (InSizeX <= 0 || InSizeY <= 0 ||
		(InSizeX % GPixelFormats[InFormat].BlockSizeX) != 0 ||
		(InSizeY % GPixelFormats[InFormat].BlockSizeY) != 0)
	{
		return nullptr;
	}

	// Most important difference with UTexture2D::CreateTransient: we provide the new texture with a name and an owner
	FName TextureName = MakeUniqueObjectName(Outer, UTexture2D::StaticClass(), BaseName);
	UTexture2D* NewTexture = NewObject<UTexture2D>(Outer, TextureName, RF_Transient);

	NewTexture->PlatformData = new FTexturePlatformData();
	NewTexture->PlatformData->SizeX = InSizeX;
	NewTexture->PlatformData->SizeY = InSizeY;
	NewTexture->PlatformData->PixelFormat = InFormat;

	// Allocate first mipmap and upload the pixel data
	int32 NumBlocksX = InSizeX / GPixelFormats[InFormat].BlockSizeX;
	int32 NumBlocksY = InSizeY / GPixelFormats[InFormat].BlockSizeY;
	FTexture2DMipMap* Mip = new(NewTexture->PlatformData->Mips) FTexture2DMipMap();
	Mip->SizeX = InSizeX;
	Mip->SizeY = InSizeY;
	Mip->BulkData.Lock(LOCK_READ_WRITE);
	void* TextureData = Mip->BulkData.Realloc(NumBlocksX * NumBlocksY * GPixelFormats[InFormat].BlockBytes);
	FMemory::Memcpy(TextureData, PixelData.GetData(), PixelData.Num());
	Mip->BulkData.Unlock();

	NewTexture->UpdateResource();

	return NewTexture;
}


/*

for(auto& path : m_imagePathList)
			{
				if (path.Len() <= 0)
				{
					continue;
				}

TArray<uint8> fileData;
UTexture2D* pLoadTexture = UQuestNPCWidget::LoadImageFromDisk(this, "D:/minion.jpg", fileData);



wchar_t imgExt[16];
wcscpy(imgExt, L"jpg");
wcscpy(imgExt, L"jpg");
if (path.Find(TEXT("jpg")) != -1)
{
	wcscpy(imgExt, L"jpg");
}
else if(path.Find(TEXT("png")) != -1)
{
	wcscpy(imgExt, L"png");
}

int textureSize = fileData.Num();

PacketStream	stream2;
stream2.SetBuffer(Packet);

stream2.Write(&textureSize, sizeof(int32));
stream2.Write(&questID, sizeof(int32));
stream2.Write(imgExt, 32);

Session->Write((int)NetworkProtocol::File, stream2.GetLength(), Packet);

int32 sendPacket = 0;
int32 totalPacket = fileData.Num();



while (totalPacket > 0)
{
	Session->m_Socket->Send(&(fileData[sendPacket]), fileData.Num(), sendPacket);
	totalPacket -= sendPacket;
}
int32 sendPacket = 0;
int32 totalPacket = fileData.Num();



int sendCount = textureSize / PACKET_SIZE;
int i = 0;
for (; i < sendCount; ++i)
{
	PacketStream	imgStream;

	imgStream.SetBuffer(Packet);
	imgStream.Write(&(fileData[i * PACKET_SIZE]), PACKET_SIZE);

	bool cdcd = Session->m_Socket->Send(&(fileData[i * PACKET_SIZE]), PACKET_SIZE, sendPacket);

	int adad = 0;

	bool send = Session->Write(imgStream.GetLength(), Packet);
	int adad = 0;
}

PacketStream	imgStream;
int imgSize = textureSize % PACKET_SIZE;
imgStream.SetBuffer(Packet);
imgStream.Write(&(fileData[i * PACKET_SIZE]), imgSize);

bool cdcd = Session->m_Socket->Send(&(fileData[i * PACKET_SIZE]), imgSize, sendPacket);
//bool send = Session->Write(imgStream.GetLength(), Packet);

int daad = 0;
}
*/