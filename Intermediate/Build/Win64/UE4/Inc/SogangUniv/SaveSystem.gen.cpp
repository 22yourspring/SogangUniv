// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/SaveSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSystem() {}
// Cross Module References
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestingData();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UClass* Z_Construct_UClass_USaveSystem_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_USaveSystem();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FQusetPlayInfo();
// End Cross Module References
class UScriptStruct* FQuestingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FQuestingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestingData, Z_Construct_UPackage__Script_SogangUniv(), TEXT("QuestingData"), sizeof(FQuestingData), Get_Z_Construct_UScriptStruct_FQuestingData_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FQuestingData>()
{
	return FQuestingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestingData(FQuestingData::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("QuestingData"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFQuestingData
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFQuestingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestingData")),new UScriptStruct::TCppStructOps<FQuestingData>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFQuestingData;
	struct Z_Construct_UScriptStruct_FQuestingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestingData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"QuestingData",
		sizeof(FQuestingData),
		alignof(FQuestingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestingData"), sizeof(FQuestingData), Get_Z_Construct_UScriptStruct_FQuestingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestingData_Hash() { return 112996140U; }
	void USaveSystem::StaticRegisterNativesUSaveSystem()
	{
	}
	UClass* Z_Construct_UClass_USaveSystem_NoRegister()
	{
		return USaveSystem::StaticClass();
	}
	struct Z_Construct_UClass_USaveSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_PlayerName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_dailyQuestList_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_dailyQuestList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dailyQuestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_dailyQuestList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_day_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_day;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_uniqueKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_uniqueKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_questingList_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_questingList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_questingList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_questingList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_coin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_coin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveSystem.h" },
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_m_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_PlayerName = { "m_PlayerName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, m_PlayerName), METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_ValueProp = { "m_dailyQuestList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FQusetPlayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_Key_KeyProp = { "m_dailyQuestList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList = { "m_dailyQuestList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, m_dailyQuestList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_m_day_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_day = { "m_day", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, m_day), METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_day_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_day_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_m_uniqueKey_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_uniqueKey = { "m_uniqueKey", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, m_uniqueKey), METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_uniqueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_uniqueKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_ValueProp = { "m_questingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FQuestingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_Key_KeyProp = { "m_questingList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList = { "m_questingList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, m_questingList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_m_coin_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_m_coin = { "m_coin", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, m_coin), METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_coin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_m_coin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_dailyQuestList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_day,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_uniqueKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_questingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_m_coin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveSystem_Statics::ClassParams = {
		&USaveSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveSystem, 1222426367);
	template<> SOGANGUNIV_API UClass* StaticClass<USaveSystem>()
	{
		return USaveSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveSystem(Z_Construct_UClass_USaveSystem, &USaveSystem::StaticClass, TEXT("/Script/SogangUniv"), TEXT("USaveSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
