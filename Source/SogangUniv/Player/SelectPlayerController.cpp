// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectPlayerController.h"
#include "SelectPlayer.h"
#include "../CharacterSelectGameMode.h"
#include "../UI/CharacterSelectHUD.h"

ASelectPlayerController::ASelectPlayerController()
{
	bShowMouseCursor = true;
}

void ASelectPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void ASelectPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction(TEXT("CharacterSelect"), EInputEvent::IE_Pressed, this, &ASelectPlayerController::MouseClick);
	InputComponent->BindAction(TEXT("CharacterSelect"), EInputEvent::IE_Released, this, &ASelectPlayerController::MouseRelease);
}

void ASelectPlayerController::MouseClick()
{
	Picking();
}

void ASelectPlayerController::MouseRelease()
{
}

void ASelectPlayerController::Picking()
{
	FHitResult	result;

	bool Hit = GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel10, false, result);

	ACharacterSelectGameMode* GameMode = Cast<ACharacterSelectGameMode>(GetWorld()->GetAuthGameMode());
	UCharacterSelectHUD* SelectHUD = GameMode->GetSelectHUD();

	if (!SelectHUD || !GameMode)
		return;
	

	if (Hit)
	{
		ASelectPlayer* SelectPlayer = Cast<ASelectPlayer>(result.GetActor());

		LOG(TEXT("%s"), *result.GetActor()->GetName());

		if (SelectPlayer)
		{
			SelectHUD->EnableStartButton(true);
			SelectHUD->SetStateVisibility(ESlateVisibility::SelfHitTestInvisible);
			SelectHUD->SetInputNameVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
		else
		{	
			SelectHUD->EnableStartButton(false);
			SelectHUD->SetStateVisibility(ESlateVisibility::Collapsed);
			SelectHUD->SetInputNameVisibility(ESlateVisibility::Collapsed);
		}
	}
	else
	{
		SelectHUD->EnableStartButton(false);
		SelectHUD->SetStateVisibility(ESlateVisibility::Collapsed);
		SelectHUD->SetInputNameVisibility(ESlateVisibility::Collapsed);
	}
}
