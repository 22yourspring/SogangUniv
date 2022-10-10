// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestDescWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestDescWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestDescWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestDescWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestDescWidget::execLoadImageFromDisk)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UQuestDescWidget::LoadImageFromDisk(Z_Param_Outer,Z_Param_ImagePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestDescWidget::execTestClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestClick();
		P_NATIVE_END;
	}
	void UQuestDescWidget::StaticRegisterNativesUQuestDescWidget()
	{
		UClass* Class = UQuestDescWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadImageFromDisk", &UQuestDescWidget::execLoadImageFromDisk },
			{ "TestClick", &UQuestDescWidget::execTestClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics
	{
		struct QuestDescWidget_eventLoadImageFromDisk_Parms
		{
			UObject* Outer;
			FString ImagePath;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDescWidget_eventLoadImageFromDisk_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDescWidget_eventLoadImageFromDisk_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDescWidget_eventLoadImageFromDisk_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "TEST" },
		{ "DefaultToSelf", "Outer" },
		{ "HidePin", "Outer" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDescWidget, nullptr, "LoadImageFromDisk", nullptr, nullptr, sizeof(QuestDescWidget_eventLoadImageFromDisk_Parms), Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestDescWidget_TestClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDescWidget_TestClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "TEST" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDescWidget_TestClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDescWidget, nullptr, "TestClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDescWidget_TestClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDescWidget_TestClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDescWidget_TestClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDescWidget_TestClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestDescWidget_NoRegister()
	{
		return UQuestDescWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestDescWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DescText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DescText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CheckButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CheckButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestDescWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestDescWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestDescWidget_LoadImageFromDisk, "LoadImageFromDisk" }, // 2545294191
		{ &Z_Construct_UFunction_UQuestDescWidget_TestClick, "TestClick" }, // 3330249377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDescWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestDescWidget.h" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_NameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestDescWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_NameText = { "m_NameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDescWidget, m_NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_NameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_DescText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestDescWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_DescText = { "m_DescText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDescWidget, m_DescText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_DescText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_DescText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_CheckButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestDescWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_CheckButton = { "m_CheckButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDescWidget, m_CheckButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_CheckButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_CheckButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_Image_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestDescWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestDescWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_Image = { "m_Image", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDescWidget, m_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestDescWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_NameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_DescText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_CheckButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDescWidget_Statics::NewProp_m_Image,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestDescWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestDescWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestDescWidget_Statics::ClassParams = {
		&UQuestDescWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestDescWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestDescWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestDescWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestDescWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestDescWidget, 94712987);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestDescWidget>()
	{
		return UQuestDescWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestDescWidget(Z_Construct_UClass_UQuestDescWidget, &UQuestDescWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestDescWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestDescWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
