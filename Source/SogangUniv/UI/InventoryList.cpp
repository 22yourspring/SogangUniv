// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryList.h"
#include "../SogangUnivGameInstance.h"
#include "InventoryItemDataList.h"

void UInventoryList::NativeConstruct()
{
	Super::NativeConstruct();

	m_InventoryList = Cast<UListView>(GetWidgetFromName(TEXT("InventoryList")));

	/*
	// Test Item
	FString ItemNameArray[7] =
	{
		TEXT("SM_MeatA"),
		TEXT("SM_Dried_fish"),
		TEXT("SM_Pan"),
		TEXT("SM_SpadA"),
		TEXT("SM_Bag_bread"),
		TEXT("SM_Baton_wood"),
		TEXT("SM_GrassA_Red"),
	};

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	// Test Item Insert
	for (int32 i = 0; i < 100; i++)
	{
		int32	Index = FMath::RandRange(0, 6);

		const FUIItemTableInfo* Info = GameInst->FindUIItemInfo(ItemNameArray[Index]);

		UInventoryItemDataList* Data = NewObject<UInventoryItemDataList>(this, UInventoryItemDataList::StaticClass());
		Data->SetNameText(Info->Name);
		Data->SetIconPath(Info->IconPath);
		Data->SetIndex(i);

		m_InventoryList->AddItem(Data);
		//	m_InventoryList->Remove(); 지우기
	}
	*/

// 클릭시 동작할 함수를 등록
	
	// 클릭시
	// m_InventoryList->OnItemClicked();
	m_InventoryList->OnItemDoubleClicked().AddUObject(this, &UInventoryList::ItemDoubleClick);

	//m_InventoryList->OnItemSelectionChanged(); // 선택한 항목이 바뀔 때
	//m_InventoryList->OnItemDoubleClicked(); // 더블클릭시
	//m_InventoryList->OnItemIsHoveredChanged(); // 마우스 올라온 항목이 바뀔 때


}

void UInventoryList::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UInventoryList::ItemDoubleClick(UObject* Data)
{
	// 선택한 아이템이 들어옴
	UInventoryItemDataList* Item = Cast<UInventoryItemDataList>(Data);

	if (Item)
	{
		m_InventoryList->RemoveItem(Data);	// 선택한 항목을 제거
		PrintViewPort(1.f, FColor::Red, Item->GetNameText());
	}
}