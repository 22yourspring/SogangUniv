// Copyright Epic Games, Inc. All Rights Reserved.


#include "SogangUnivGameModeBase.h"
#include "SogangUnivGameInstance.h"
#include "SaveSystem.h"
#include "Network/PacketStream.h"
#include "Player/MainPlayerController.h"

ASogangUnivGameModeBase::ASogangUnivGameModeBase()
{
	static ConstructorHelpers::FClassFinder<UMainHUD>	MainHUDClass(TEXT("WidgetBlueprint'/Game/UI/UI_MainHUD.UI_MainHUD_C'"));
	if (MainHUDClass.Succeeded())
		m_MainHUDClass = MainHUDClass.Class;

	static ConstructorHelpers::FClassFinder<APawn> PawnClass(TEXT("Blueprint'/Game/Player/BPPspsps_Cat.BPPspsps_Cat_C'"));
	if (PawnClass.Succeeded())
		DefaultPawnClass = PawnClass.Class;

	PlayerControllerClass = AMainPlayerController::StaticClass();
}

void ASogangUnivGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
	if (GameInst)
	{
	}

	m_MainAssetPath = UAssetPathMain::StaticClass()->GetDefaultObject<UAssetPathMain>();
	m_MainAssetPath->ConvertPath();
}

void ASogangUnivGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 유효하다면
	if (IsValid(m_MainHUDClass))
	{
		m_MainHUD = Cast<UMainHUD>(CreateWidget(GetWorld(), m_MainHUDClass));

		if (m_MainHUD)
			m_MainHUD->AddToViewport();
	}

	APlayerController* Controller = GetWorld()->GetFirstPlayerController();

	// FInputModeGameOnly		Mode;
	FInputModeGameAndUI		Mode;
	
	/*
		FInputModeUIOnly		Mode;	// UI Cursor O
		FInputModeGameOnly		Mode;	// Cursor X
		FInputModeGameAndUI		Mode;	// 게임하면서 마우스 보이게
	*/
	

	Controller->SetInputMode(Mode);
	Controller->bShowMouseCursor = false;
}

void ASogangUnivGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}