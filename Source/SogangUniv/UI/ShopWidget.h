// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "ShopWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UShopWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_pDesc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTextBlock* m_pMsg;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UButton* m_pNext;

protected:
	virtual void NativeConstruct();

public:
	UFUNCTION()
		void SetRender(bool render);

	UFUNCTION(BlueprintCallable, Category = "Shop")
		bool Buy(int32 cost = 15);
};
