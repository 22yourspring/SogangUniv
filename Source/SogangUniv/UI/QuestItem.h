// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Blueprint/UserWidget.h"
#include "QuestItem.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestItem : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_NameText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UImage*		m_Selection;

public:
	void Selection();
	void UnSelection();

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	UFUNCTION(BlueprintCallable)
	void SetData(UObject* Data);
};
