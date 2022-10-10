// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "CharacterSelectState.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UCharacterSelectState : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UImage* m_CharacterImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_NameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_LevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_CoinText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_HPText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_MPText; 

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void SetImageMaterial(UMaterialInterface* Material);
	void SetNameText(const FString& Name) { m_NameText->SetText(FText::FromString(Name)); }
	void SetLevelText(int32 Level) { m_LevelText->SetText(FText::FromString(FString::Printf(TEXT("Level : %d"), Level))); }
	void SetCoinText(int32 Coin) { m_CoinText->SetText(FText::FromString(FString::Printf(TEXT("S Coin : %d"), Coin))); }
	void SetHPText(int32 HP, int32 HPMax) { m_HPText->SetText(FText::FromString(FString::Printf(TEXT("HP : %d / %d"), HP, HPMax))); }
	void SetMPText(int32 MP, int32 MPMax) { m_MPText->SetText(FText::FromString(FString::Printf(TEXT("MP : %d / %d"), MP, MPMax))); }
};
