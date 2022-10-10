// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "CharacterSelectHUD.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UCharacterSelectHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_StartButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_BackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCharacterSelectState*	m_CharacterState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCharacterNameInputWidget*	m_NameInput;

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	UFUNCTION()
	void StartButtonClick();

	UFUNCTION()
	void BackButtonClick();

public:
	void EnableStartButton(bool Enable) { m_StartButton->SetIsEnabled(Enable); }
	void SetStateVisibility(ESlateVisibility Visible);
	void SetInputNameVisibility(ESlateVisibility Visible);
	void SetCharacterInfo(const FPlayerInfo& Info);
};
