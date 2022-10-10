#pragma once

#include "../GameInfo.h"
#include "QuestListeItemData.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "QuestListItemWidget.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API UQuestListItemWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UTextBlock* m_NameText;

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	
public:
	UFUNCTION(BlueprintCallable)
		void SetData(UObject* Data);

};
