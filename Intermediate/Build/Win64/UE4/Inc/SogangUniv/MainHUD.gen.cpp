// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/MainHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UMainHUD_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UMainHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterHUD_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryList_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryTile_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestNPCWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UShopWidget_NoRegister();
// End Cross Module References
	void UMainHUD::StaticRegisterNativesUMainHUD()
	{
	}
	UClass* Z_Construct_UClass_UMainHUD_NoRegister()
	{
		return UMainHUD::StaticClass();
	}
	struct Z_Construct_UClass_UMainHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CharacterHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CharacterHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InventoryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InventoryList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InventoryTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InventoryTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pQuestNPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pQuestNPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pShopNPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pShopNPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainHUD.h" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_CharacterHUD_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_CharacterHUD = { "m_CharacterHUD", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_CharacterHUD), Z_Construct_UClass_UCharacterHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_CharacterHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_CharacterHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_MainMenu_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_MainMenu = { "m_MainMenu", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_MainMenu), Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_MainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_MainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryList = { "m_InventoryList", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_InventoryList), Z_Construct_UClass_UInventoryList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryTile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryTile = { "m_InventoryTile", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_InventoryTile), Z_Construct_UClass_UInventoryTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_Quest_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_Quest = { "m_Quest", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_Quest), Z_Construct_UClass_UQuestWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pQuestNPC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pQuestNPC = { "m_pQuestNPC", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_pQuestNPC), Z_Construct_UClass_UQuestNPCWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pQuestNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pQuestNPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pShopNPC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pShopNPC = { "m_pShopNPC", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainHUD, m_pShopNPC), Z_Construct_UClass_UShopWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pShopNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pShopNPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_CharacterHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_MainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_InventoryTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pQuestNPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainHUD_Statics::NewProp_m_pShopNPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainHUD_Statics::ClassParams = {
		&UMainHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainHUD, 1877106550);
	template<> SOGANGUNIV_API UClass* StaticClass<UMainHUD>()
	{
		return UMainHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainHUD(Z_Construct_UClass_UMainHUD, &UMainHUD::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UMainHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
