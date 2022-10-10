// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/EditableTextBox.h"
#include "Blueprint/UserWidget.h"
#include "CharacterNameInputWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UCharacterNameInputWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UEditableTextBox* m_InputText;

public:
	FString GetInputText() { return m_InputText->GetText().ToString(); }

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
};
