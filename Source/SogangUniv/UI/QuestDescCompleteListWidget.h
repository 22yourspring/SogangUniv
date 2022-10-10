// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "QuestDescCompleteListWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestDescCompleteListWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_TypeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_DestText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_CountText;

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	
};
