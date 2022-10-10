// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/MainMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UMainMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenuWidget::execOnQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnCharacterState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInventory();
		P_NATIVE_END;
	}
	void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
	{
		UClass* Class = UMainMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterState", &UMainMenuWidget::execOnCharacterState },
			{ "OnInventory", &UMainMenuWidget::execOnInventory },
			{ "OnQuest", &UMainMenuWidget::execOnQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnCharacterState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnCharacterState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnCharacterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnCharacterState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnCharacterState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnCharacterState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnCharacterState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnCharacterState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
	{
		return UMainMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InventoryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InventoryButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CharacterStateButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CharacterStateButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_QuestButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_QuestButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_OptionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_OptionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pCoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pCoin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnCharacterState, "OnCharacterState" }, // 2419915867
		{ &Z_Construct_UFunction_UMainMenuWidget_OnInventory, "OnInventory" }, // 4226523817
		{ &Z_Construct_UFunction_UMainMenuWidget_OnQuest, "OnQuest" }, // 1960823049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenuWidget.h" },
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_InventoryButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_InventoryButton = { "m_InventoryButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, m_InventoryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_InventoryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_InventoryButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_CharacterStateButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_CharacterStateButton = { "m_CharacterStateButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, m_CharacterStateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_CharacterStateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_CharacterStateButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_QuestButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_QuestButton = { "m_QuestButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, m_QuestButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_QuestButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_QuestButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_OptionButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_OptionButton = { "m_OptionButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, m_OptionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_OptionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_OptionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_pCoin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_pCoin = { "m_pCoin", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, m_pCoin), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_pCoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_pCoin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_InventoryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_CharacterStateButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_QuestButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_OptionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_m_pCoin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
		&UMainMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuWidget, 537451288);
	template<> SOGANGUNIV_API UClass* StaticClass<UMainMenuWidget>()
	{
		return UMainMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuWidget(Z_Construct_UClass_UMainMenuWidget, &UMainMenuWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UMainMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
