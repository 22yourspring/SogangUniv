// Fill out your copyright notice in the Description page of Project Settings.


#include "StartWidget.h"
#include "../Network/NetworkManager.h"
#include "../SaveSystem.h"
#include "../Network/NetworkSession.h"
#include "../Network/PacketStream.h"
#include "../UI/QuestNPCWidget.h"
#include "PixelFormat.h"
#include "RHI.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "RenderUtils.h"
#include "Engine/Texture2D.h"
#include "../SogangUnivGameInstance.h"
#include <string>

void UStartWidget::NativeConstruct()
{
	Super::NativeConstruct();

	m_StartButton = Cast<UButton>(GetWidgetFromName(TEXT("StartButton")));
	m_QuitButton = Cast<UButton>(GetWidgetFromName(TEXT("QuitButton")));

	m_StartButton->OnReleased.AddDynamic(this, &UStartWidget::StartButton);
	m_QuitButton->OnReleased.AddDynamic(this, &UStartWidget::QuitButton);
	
	m_StartButton->OnPressed.AddDynamic(this, &UStartWidget::StartButton_OnPressed);
	m_QuitButton->OnPressed.AddDynamic(this, &UStartWidget::QuitButton_OnPressed);

	// Find Animation
	BindingWidgetAnimation();
}

void UStartWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UStartWidget::BindingWidgetAnimation()
{
	UProperty* Prop = GetClass()->PropertyLink;

	while (Prop != nullptr)
	{
		if (Prop->GetClass() == UObjectProperty::StaticClass())
		{
			UObjectProperty* ObjProp = Cast<UObjectProperty>(Prop);

			if (ObjProp->PropertyClass == UWidgetAnimation::StaticClass())
			{
				UObject* Obj = ObjProp->GetObjectPropertyValue_InContainer(this);

				UWidgetAnimation* Anim = Cast<UWidgetAnimation>(Obj);

				if (Anim != nullptr)
				{
					if (Anim->MovieScene->GetFName() == "StartButtonMouseOn")
						m_StartButtonMouseOn = Anim;

					else if (Anim->MovieScene->GetFName() == "QuitButtonMouseOn")
						m_QuitButtonMouseOn = Anim;
				}
			}
		}

		Prop = Prop->PropertyLinkNext;
	}
}

void UStartWidget::StartButton()
{
	if (NetworkManager::GetInst()->Init())
	{
		USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));

		if (pLoadGame == nullptr)
		{
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("CharacterSelect"));
		}
		else
		{
			USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
		
			if (GameInst)
			{
				FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");

				if (Info)
				{
					Info->Name = pLoadGame->GetPlayerName();
					Info->uniqueKey = pLoadGame->GetUniqueKey();
					Info->Coin = pLoadGame->GetCoin();
					PacketStream	stream;
					uint8 Packet[PACKET_SIZE];
					wchar_t namePacket[16];

					std::wstring playerName = TCHAR_TO_WCHAR(*Info->Name);

					wcscpy(namePacket, playerName.c_str());
					
					PrintViewPort(30.f, FColor::Blue, WCHAR_TO_TCHAR(namePacket));

					stream.SetBuffer(Packet);

					NetworkSession* Session = NetworkManager::GetInst()->GetSession();
					stream.Write(namePacket, 32);
					stream.Write(&Info->uniqueKey, 4);
					Session->Write((int)NetworkProtocol::UserConnect, stream.GetLength(), Packet);
				}
			}
			
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("Sapphire"));
		}
	}
}

void UStartWidget::QuitButton()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
}

void UStartWidget::StartButton_OnPressed()
{
}

void UStartWidget::QuitButton_OnPressed()
{
}
