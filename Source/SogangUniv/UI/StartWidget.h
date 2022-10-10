// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/Button.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/UserWidget.h"
#include "StartWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UStartWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_StartButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UButton* m_QuitButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UWidgetAnimation* m_StartButtonMouseOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UWidgetAnimation* m_QuitButtonMouseOn;

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	
protected:
	void BindingWidgetAnimation();

public:
	UFUNCTION()
	void StartButton();

	UFUNCTION()
	void QuitButton();

	UFUNCTION()
	void StartButton_OnPressed();

	UFUNCTION()
	void QuitButton_OnPressed();
};
