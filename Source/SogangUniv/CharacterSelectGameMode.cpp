// Fill out your copyright notice in the Description page of Project Settings.
#include "CharacterSelectGameMode.h"
#include "Player/SelectPlayerController.h"
#include "Player/SelectPawn.h"

ACharacterSelectGameMode::ACharacterSelectGameMode()
{
	PlayerControllerClass = ASelectPlayerController::StaticClass();
	DefaultPawnClass = ASelectPawn::StaticClass();

	static ConstructorHelpers::FClassFinder<UCharacterSelectHUD> SelectHUDClass(TEXT("WidgetBlueprint'/Game/UI/UI_CharacterSelectHUD.UI_CharacterSelectHUD_C'"));
	if (SelectHUDClass.Succeeded())
		m_SelectHUDClass = SelectHUDClass.Class;
}

void ACharacterSelectGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ACharacterSelectGameMode::BeginPlay()
{
	Super::BeginPlay();

	// 유효하다면
	if (IsValid(m_SelectHUDClass))
	{
		m_SelectHUD = Cast<UCharacterSelectHUD>(CreateWidget(GetWorld(), m_SelectHUDClass));

		if (m_SelectHUD)
			m_SelectHUD->AddToViewport();
	}

	APlayerController* Controller = GetWorld()->GetFirstPlayerController();

	FInputModeGameAndUI			Mode;
	/*
		FInputModeUIOnly		Mode;	// UI Cursor O
		FInputModeGameOnly		Mode;	// Cursor X
		FInputModeGameAndUI		Mode;	// 게임하면서 마우스 보이게
	*/
	Controller->SetInputMode(Mode);
	Controller->bShowMouseCursor = true;
}

void ACharacterSelectGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}