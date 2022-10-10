// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestDescWidget.h"
#include "../SogangUnivGameInstance.h"
#include "QuestListeItemData.h"
#include "Components/CanvasPanelSlot.h"
#include "PixelFormat.h"
#include "RHI.h"

#include "IImageWrapper.h"
#include "RenderUtils.h"
#include "Engine/Texture2D.h"

//#if PLATFORM_ANDROID
//#include <jni.h>
//#include "Android/AndroidJNI.h"
//#include "Android/AndroidJava.h"
//#include "Android/AndroidApplication.h"
//#include <Android/asset_manager.h>
//#include <Android/asset_manager_jni.h>
//#endif

void UQuestDescWidget::TestClick()
{ 
//#if PLATFORM_ANDROID
//	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
//	{
//		/*jmethodID GetPackageNameMethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, " AndroidThunk "; Java " . °ÅÁþ ); 
//			FJavaWrapper::CallObjectMethod(Env, FJavaWrapper::GameActivityThis, GetPackageNameMethodID);*/
//	}
//#endif
}

void UQuestDescWidget::NativeConstruct()
{
	m_CheckButton = Cast<UButton>(GetWidgetFromName(TEXT("BtnYes")));

	Super::NativeConstruct();

	m_NameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("QuestNameText")));
	m_DescText = Cast<UTextBlock>(GetWidgetFromName(TEXT("QuestDescText")));
}

void UQuestDescWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

UTexture2D* UQuestDescWidget::LoadImageFromDisk(UObject* Outer, const FString& ImagePath)
{
	FString testPath = ImagePath;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageFromDisk"));

	int searchIdx = testPath.Find(TEXT("jpg"));

	if (searchIdx != -1)
	{
		testPath.RemoveAt(searchIdx + 3, testPath.Len() - (searchIdx + 2));
	}
	else
	{
		searchIdx = testPath.Find(TEXT("png"));
		if (searchIdx != -1)
		{
			testPath.RemoveAt(searchIdx + 3, testPath.Len() - (searchIdx + 2));
		}
	}

	// Check if the file exists first
	if (!FPaths::FileExists(testPath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FileExists No!!"));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, testPath);

		if (!FPaths::FileExists(testPath))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FileExists No2!!"));

			return nullptr;
		}
	}

	// Load the compressed byte data from the file
	TArray<uint8> FileData;
	if (!FFileHelper::LoadFileToArray(FileData, *testPath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadFileToArray Fail"));
		return nullptr;
	}

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(TEXT("ImageWrapper"));

	// Detect the image type using the ImageWrapper module
	EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(FileData.GetData(), FileData.Num());
	if (ImageFormat == EImageFormat::Invalid)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ImageFormat == EImageFormat::Invalid"));

		return nullptr;
	}

	// Create an image wrapper for the detected image format
	IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
	if (!ImageWrapper.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("!ImageWrapper.IsValid()"));

		return nullptr;
	}

	// Decompress the image data
	TArray<uint8> RawData;
	ImageWrapper->SetCompressed(FileData.GetData(), FileData.Num());
	ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, RawData);
	if (RawData.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("RawData.Num()"));
		return nullptr;
	}

	// Create the texture and upload the uncompressed image data
	FString TextureBaseName = TEXT("Texture_") + FPaths::GetBaseFilename(testPath);
	return CreateTexture(Outer, RawData, ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), EPixelFormat::PF_B8G8R8A8, FName(*TextureBaseName));
}

UTexture2D* UQuestDescWidget::CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat InFormat, FName BaseName)
{
	// Shamelessly copied from UTexture2D::CreateTransient with a few modifications
	if (InSizeX <= 0 || InSizeY <= 0 ||
		(InSizeX % GPixelFormats[InFormat].BlockSizeX) != 0 ||
		(InSizeY % GPixelFormats[InFormat].BlockSizeY) != 0)
	{
		return nullptr;
	}

	// Most important difference with UTexture2D::CreateTransient: we provide the new texture with a name and an owner
	FName TextureName = MakeUniqueObjectName(Outer, UTexture2D::StaticClass(), BaseName);
	UTexture2D* NewTexture = NewObject<UTexture2D>(Outer, TextureName, RF_Transient);

	NewTexture->PlatformData = new FTexturePlatformData();
	NewTexture->PlatformData->SizeX = InSizeX;
	NewTexture->PlatformData->SizeY = InSizeY;
	NewTexture->PlatformData->PixelFormat = InFormat;

	// Allocate first mipmap and upload the pixel data
	int32 NumBlocksX = InSizeX / GPixelFormats[InFormat].BlockSizeX;
	int32 NumBlocksY = InSizeY / GPixelFormats[InFormat].BlockSizeY;
	FTexture2DMipMap* Mip = new(NewTexture->PlatformData->Mips) FTexture2DMipMap();
	Mip->SizeX = InSizeX;
	Mip->SizeY = InSizeY;
	Mip->BulkData.Lock(LOCK_READ_WRITE);
	void* TextureData = Mip->BulkData.Realloc(NumBlocksX * NumBlocksY * GPixelFormats[InFormat].BlockBytes);
	FMemory::Memcpy(TextureData, PixelData.GetData(), PixelData.Num());
	Mip->BulkData.Unlock();

	NewTexture->UpdateResource();
	return NewTexture;
}