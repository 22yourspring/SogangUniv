// Fill out your copyright notice in the Description page of Project Settings.
#include "CharacterSelectHUD.h"
#include "CharacterSelectState.h"
#include "CharacterNameInputWidget.h"
#include "../Player/PlayerCharacter.h"
#include "../SogangUnivGameInstance.h"

#include "../Network/NetworkManager.h"
#include "../Network/NetworkSession.h"
#include "../Network/PacketStream.h"

void UCharacterSelectHUD::NativeConstruct()
{
	Super::NativeConstruct();

	m_StartButton = Cast<UButton>(GetWidgetFromName(TEXT("StartButton")));
	m_BackButton = Cast<UButton>(GetWidgetFromName(TEXT("BackButton")));

	m_CharacterState = Cast<UCharacterSelectState>(GetWidgetFromName(TEXT("UI_SelectState_Character")));

	m_NameInput = Cast<UCharacterNameInputWidget>(GetWidgetFromName(TEXT("UI_CharacterNameInput")));

	m_StartButton->OnReleased.AddDynamic(this, &UCharacterSelectHUD::StartButtonClick);
	m_BackButton->OnReleased.AddDynamic(this, &UCharacterSelectHUD::BackButtonClick);

	// Character Image Material Loading
	UMaterialInterface* CharacterMaterial = LoadObject<UMaterialInstance>(nullptr, TEXT("MaterialInstanceConstant'/Game/UI/MTUIRenderTargetDepthClear_Inst.MTUIRenderTargetDepthClear_Inst'"));
	m_CharacterState->SetImageMaterial(CharacterMaterial);
}

void UCharacterSelectHUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UCharacterSelectHUD::StartButtonClick()
{
	// CharacterHUD Name
	FString InputName = m_NameInput->GetInputText();

	//
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst)
	{
		FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");

		if (Info)
		{
			Info->Name = InputName;
		}

		PacketStream	stream;
		uint8 Packet[PACKET_SIZE];
		wchar_t namePacket[16];

		wcscpy(namePacket, TCHAR_TO_WCHAR(*Info->Name));

		stream.SetBuffer(Packet);

		NetworkSession* Session = NetworkManager::GetInst()->GetSession();
		stream.Write(namePacket, 32);
		Session->Write((int)NetworkProtocol::UserConnect, stream.GetLength(), Packet);
	}
	//

	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Sapphire"));
}

void UCharacterSelectHUD::BackButtonClick()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Start"));
}

void UCharacterSelectHUD::SetStateVisibility(ESlateVisibility Visible)
{
	m_CharacterState->SetVisibility(Visible);
}

void UCharacterSelectHUD::SetInputNameVisibility(ESlateVisibility Visible)
{
	m_NameInput->SetVisibility(Visible);
}

void UCharacterSelectHUD::SetCharacterInfo(const FPlayerInfo& Info)
{
	m_CharacterState->SetNameText(Info.Name);
	m_CharacterState->SetLevelText(Info.Level);
	m_CharacterState->SetCoinText(Info.Coin);
	m_CharacterState->SetHPText(Info.HP, Info.HPMax);
	m_CharacterState->SetMPText(Info.MP, Info.MPMax);
}
