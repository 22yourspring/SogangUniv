// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameMode.h"

AStartGameMode::AStartGameMode()
{
	static ConstructorHelpers::FClassFinder<UStartWidget>	StartHUDClass(TEXT("WidgetBlueprint'/Game/UI/UI_Start.UI_Start_C'"));
	if (StartHUDClass.Succeeded())
		m_StartHUDClass = StartHUDClass.Class;
}

void AStartGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void AStartGameMode::BeginPlay()
{
	Super::BeginPlay();

	// 유효하다면
	if (IsValid(m_StartHUDClass))
	{
		m_StartHUD = Cast<UStartWidget>(CreateWidget(GetWorld(), m_StartHUDClass));

		if (m_StartHUD)
			m_StartHUD->AddToViewport();
	}

	APlayerController*	Controller = GetWorld()->GetFirstPlayerController();

	FInputModeUIOnly	Mode;
	/*
		FInputModeUIOnly		Mode;	// UI Cursor O
		FInputModeGameOnly		Mode;	// Cursor X
		FInputModeGameAndUI		Mode;	// 게임하면서 마우스 보이게
	*/

	Controller->SetInputMode(Mode);
	Controller->bShowMouseCursor = true;
}