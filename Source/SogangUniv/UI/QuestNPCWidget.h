// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/ListView.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/ComboBoxString.h"
#include "Components/EditableTextBox.h"
#include "QuestNPCWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestNPCWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_pDesc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_pSleepTimeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UListView* m_pList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString m_defaultDesc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UCanvasPanel* m_pImageSendPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UImage* m_pImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UButton* m_pImageSendButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UComboBoxString* m_pStartMinute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UComboBoxString* m_pStartClock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UComboBoxString* m_pEndMinute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UComboBoxString* m_pEndClock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UCanvasPanel* m_pSleepPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<int32> m_dailyQuestList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<FString> m_imagePathList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_imageIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UEditableTextBox* m_pEditBox;

protected:
	virtual void NativeConstruct();

public:
	UFUNCTION()
		void ItemClick(UObject* Data);

	UFUNCTION()
		void SetRender(bool render);

	UFUNCTION()
		void AddListItemByID(int questID, int questValue, int index = -1);

	UFUNCTION()
		void AddListItemByName(const FString& name, int questID, int subQuestId, int index, EQuestButtonType type, EQuestScriptType scriptType, int32 reward, int32 timer);

	UFUNCTION(BlueprintCallable, Category = "TEST", meta = (HidePin = "Outer", DefaultToSelf = "Outer"))
		static UTexture2D* LoadImageFromDisk(UObject* Outer, const FString& ImagePath, TArray<uint8>& FileData, FString& outPath);

	UFUNCTION(BlueprintCallable, Category = "TEST", meta = (HidePin = "Outer", DefaultToSelf = "Outer"))
		void AddImagePath(FString path);

	UFUNCTION()
		void NativePushImagePath(int32 questID);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "User Interface")
		void PushImagePath(const FString& path, const FString& ext);

	static UTexture2D* CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat PixelFormat = EPixelFormat::PF_B8G8R8A8, FName BaseName = NAME_None);
};
