// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "../GameInfo.h"
#include "Components/TextBlock.h"
#include "Components/ListView.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "IImageWrapperModule.h"
#include "Blueprint/UserWidget.h"
#include "QuestDescWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestDescWidget : public UUserWidget
{
	GENERATED_BODY()
		
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_NameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_DescText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UButton* m_CheckButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UImage* m_Image;

public:
	void SetQuestName(const FString& Name)
	{
		m_NameText->SetText(FText::FromString(Name));
	}	

	void SetQuestDesc(const FString& Desc)
	{
		m_DescText->SetText(FText::FromString(Desc));
	}

	void SetQuestImage(const FString& Desc)
	{
		m_DescText->SetText(FText::FromString(Desc));
	}
	
	UFUNCTION(BlueprintCallable, Category = "TEST")
	void TestClick();

	UFUNCTION(BlueprintCallable, Category = "TEST",  meta = (HidePin = "Outer", DefaultToSelf = "Outer"))
	static UTexture2D* LoadImageFromDisk(UObject* Outer, const FString& ImagePath);

	static UTexture2D* CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat PixelFormat = EPixelFormat::PF_B8G8R8A8, FName BaseName = NAME_None);

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
};
