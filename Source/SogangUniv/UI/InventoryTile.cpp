// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryTile.h"
#include "../SogangUnivGameInstance.h"
#include "Components/CanvasPanelSlot.h"

void UInventoryTile::NativeConstruct()
{
	Super::NativeConstruct();

	m_InventoryTile = Cast<UTileView>(GetWidgetFromName(TEXT("InventoryTile")));
	m_InventorySlot = Cast<UTileView>(GetWidgetFromName(TEXT("InventorySlot")));
	m_ItemDescWidget = Cast<UItemDescWidget>(GetWidgetFromName(TEXT("UI_ItemDesc")));

	m_InventoryTile->SetScrollbarVisibility(ESlateVisibility::Collapsed);
	m_InventorySlot->SetScrollbarVisibility(ESlateVisibility::Collapsed);

	m_ItemCount = 0;

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

	// Test Item Insert
	// Tile������ Slot�� 20���� ������ ������ ��
	for (int32 i = 0; i < 20; i++)
	{
		UInventoryItemTile* Data = NewObject<UInventoryItemTile>(this, UInventoryItemTile::StaticClass());

		m_InventorySlot->AddItem(Data);
		m_SlotArray.Add(Data);
	}

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
	
	
			//�ڵ�� ���� �߰��ϴ� ���
			//UImage* Item0 = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Item0"));
			//UCanvasPanel* Canvas = WidgetTree->FindWidget<UCanvasPanel>(TEXT("CanvasPanelTile"));
			//
			//UCanvasPanelSlot* PanelSlot = Canvas->AddChildToCanvas(Item0);
			//
			//PanelSlot->SetPosition(FVector2D(200.f, 50.f));
			//PanelSlot->SetSize(FVector2D(50.f , 50.f));
	

	for (int32 i = 0; i < 100; i++)
	{
		int32	Index = FMath::RandRange(0, 6);

		const FUIItemTableInfo* Info = GameInst->FindUIItemInfo(ItemNameArray[Index]);

		UInventoryItemDataTile* Data = NewObject<UInventoryItemDataTile>(this, UInventoryItemDataTile::StaticClass());
		Data->SetNameText(Info->Name);
		Data->SetIconPath(Info->IconPath);
		Data->SetIndex(i);

		m_InventoryTile->AddItem(Data);

		if (i >= 20)
		{
			UInventoryItemTile* Data1 = NewObject<UInventoryItemTile>(this, UInventoryItemTile::StaticClass());

			m_InventorySlot->AddItem(Data1);
			m_SlotArray.Add(Data1);
		}
	}
	*/

	// m_InventoryTile->AddItem(); �߰�
	// m_InventoryList->Remove(); �����

	m_ItemCount = 100;
	m_MouseHovered = false;

	// Ŭ���� ������ �Լ��� ���

		// Ŭ����
		// m_InventoryList->OnItemClicked();
	m_InventoryTile->OnItemDoubleClicked().AddUObject(this, &UInventoryTile::ItemDoubleClick);
	m_InventoryTile->OnItemClicked().AddUObject(this, &UInventoryTile::ItemClick);
	//m_InventoryTile->OnItemScrolledIntoView().AddUObject(this, &UInventoryTile::ItemScroll);
	//m_InventoryList->OnItemSelectionChanged(); // ������ �׸��� �ٲ� ��
	//m_InventoryList->OnItemDoubleClicked(); // ����Ŭ����
	// 
	// m_InventoryTile->OnItemIsHoveredChanged().AddUObject(this, &UInventoryTile::ItemHovered); // ���콺 �ö�� �׸��� �ٲ� ��
	

}

void UInventoryTile::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

FReply UInventoryTile::NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseMove(InGeometry, InMouseEvent);

	if (m_MouseHovered)
	{
		UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(m_ItemDescWidget->Slot);
		if (PanelSlot)
		{
			FVector2D WidgetPos = InMouseEvent.GetScreenSpacePosition();
			// USlateBlueprintLibrary::ScreenToWidgetLocal(this, InGeometry, InMouseEvent.GetScreenSpacePosition(), WidgetPos);

			WidgetPos = USlateBlueprintLibrary::AbsoluteToLocal(InGeometry, WidgetPos);
			WidgetPos.X += 10.f;
			WidgetPos.Y += 10.f;

			PanelSlot->SetPosition(WidgetPos);

			PrintViewPort(1.f, FColor::Red, FString::Printf(TEXT("X : %.5f  Y : %0.5f"), WidgetPos.X, WidgetPos.Y));
		}
	}

	return FReply::Handled();
}

void UInventoryTile::ItemClick(UObject* Data)
{
	if (Data)
		m_MouseHovered = true;
	else
		m_MouseHovered = false;

	// ������ �������� ����
	if (Data)
	{
		m_ItemDescWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		UInventoryItemDataTile* Item = Cast<UInventoryItemDataTile>(Data);

		if (Item)
		{
			m_ItemDescWidget->SetNameText(Item->GetNameText());
			m_ItemDescWidget->SetIconTexture(Item->GetIconTexture());

			PrintViewPort(1.f, FColor::Red, Item->GetNameText());
		}
	}
	else
		m_ItemDescWidget->SetVisibility(ESlateVisibility::Collapsed);
}

void UInventoryTile::ItemDoubleClick(UObject* Data)
{
	// ������ �������� ����
	UInventoryItemDataTile* Item = Cast<UInventoryItemDataTile>(Data);

	if (Item)
	{
		m_InventoryTile->RemoveItem(Data);
		m_InventorySlot->RemoveItem(m_SlotArray[Item->GetIndex()]);

		if (m_SlotArray.Num() > 20)
			m_SlotArray.RemoveAt(Item->GetIndex());
	}
}

void UInventoryTile::ItemScroll(UObject* Data, UUserWidget* Widget)
{
	
}

void UInventoryTile::ItemHovered(UObject* Data, bool Hovered)
{
	m_MouseHovered = Hovered;

	// ������ �������� ����
	if (Hovered)
	{
		m_ItemDescWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		UInventoryItemDataTile* Item = Cast<UInventoryItemDataTile>(Data);
	
		if (Item)
		{
			m_ItemDescWidget->SetNameText(Item->GetNameText());
			m_ItemDescWidget->SetIconTexture(Item->GetIconTexture());

			PrintViewPort(1.f, FColor::Red, Item->GetNameText());
		}
	}
	else
		m_ItemDescWidget->SetVisibility(ESlateVisibility::Collapsed);
}

