// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/SogangUnivGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSogangUnivGameInstance() {}
// Cross Module References
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerTableInfo();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyTableInfo();
	SOGANGUNIV_API UClass* Z_Construct_UClass_USogangUnivGameInstance_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_USogangUnivGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_NpcType();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerTableInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerTableInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlayerTableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FPlayerTableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerTableInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("PlayerTableInfo"), sizeof(FPlayerTableInfo), Get_Z_Construct_UScriptStruct_FPlayerTableInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FPlayerTableInfo>()
{
	return FPlayerTableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerTableInfo(FPlayerTableInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("PlayerTableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFPlayerTableInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFPlayerTableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerTableInfo")),new UScriptStruct::TCppStructOps<FPlayerTableInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFPlayerTableInfo;
	struct Z_Construct_UScriptStruct_FPlayerTableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uniqueKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_uniqueKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Coin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerTableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_uniqueKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_uniqueKey = { "uniqueKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, uniqueKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_uniqueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_uniqueKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, Armor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, HPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MPMax = { "MPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, MPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Coin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Coin = { "Coin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, Coin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Coin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Coin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, AttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackAngle = { "AttackAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, AttackAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerTableInfo, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_uniqueKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_Coin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_AttackAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::NewProp_MoveSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerTableInfo",
		sizeof(FPlayerTableInfo),
		alignof(FPlayerTableInfo),
		Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerTableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerTableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerTableInfo"), sizeof(FPlayerTableInfo), Get_Z_Construct_UScriptStruct_FPlayerTableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerTableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerTableInfo_Hash() { return 4031941724U; }

static_assert(std::is_polymorphic<FEnemyTableInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEnemyTableInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FEnemyTableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FEnemyTableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyTableInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EnemyTableInfo"), sizeof(FEnemyTableInfo), Get_Z_Construct_UScriptStruct_FEnemyTableInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FEnemyTableInfo>()
{
	return FEnemyTableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyTableInfo(FEnemyTableInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("EnemyTableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFEnemyTableInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFEnemyTableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyTableInfo")),new UScriptStruct::TCppStructOps<FEnemyTableInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFEnemyTableInfo;
	struct Z_Construct_UScriptStruct_FEnemyTableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Coin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyTableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, Armor), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, HPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MPMax = { "MPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, MPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Coin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Coin = { "Coin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, Coin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Coin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Coin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, AttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackAngle = { "AttackAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, AttackAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyTableInfo" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyTableInfo, TraceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_TraceDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_Coin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_AttackAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::NewProp_TraceDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EnemyTableInfo",
		sizeof(FEnemyTableInfo),
		alignof(FEnemyTableInfo),
		Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyTableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyTableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyTableInfo"), sizeof(FEnemyTableInfo), Get_Z_Construct_UScriptStruct_FEnemyTableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyTableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyTableInfo_Hash() { return 2652842113U; }
	void USogangUnivGameInstance::StaticRegisterNativesUSogangUnivGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USogangUnivGameInstance_NoRegister()
	{
		return USogangUnivGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USogangUnivGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EnemyInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_EnemyInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PlayerInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UIItemInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_UIItemInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_QuestInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_QuestInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DailyQuestInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DailyQuestInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SensingQuestInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SensingQuestInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StretchingQuestInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_StretchingQuestInfoTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NpcTrigger_MetaData[];
#endif
		static void NewProp_m_NpcTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_NpcTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_npcType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_npcType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_npcType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_percentList_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_percentList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_percentList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USogangUnivGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SogangUnivGameInstance.h" },
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_EnemyInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_EnemyInfoTable = { "m_EnemyInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_EnemyInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_EnemyInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_EnemyInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_PlayerInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_PlayerInfoTable = { "m_PlayerInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_PlayerInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_PlayerInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_PlayerInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_UIItemInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_UIItemInfoTable = { "m_UIItemInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_UIItemInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_UIItemInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_UIItemInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_QuestInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_QuestInfoTable = { "m_QuestInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_QuestInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_QuestInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_QuestInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_DailyQuestInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_DailyQuestInfoTable = { "m_DailyQuestInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_DailyQuestInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_DailyQuestInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_DailyQuestInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_SensingQuestInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_SensingQuestInfoTable = { "m_SensingQuestInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_SensingQuestInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_SensingQuestInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_SensingQuestInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_StretchingQuestInfoTable_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_StretchingQuestInfoTable = { "m_StretchingQuestInfoTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_StretchingQuestInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_StretchingQuestInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_StretchingQuestInfoTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger_SetBit(void* Obj)
	{
		((USogangUnivGameInstance*)Obj)->m_NpcTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger = { "m_NpcTrigger", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USogangUnivGameInstance), &Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType = { "m_npcType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, m_npcType), Z_Construct_UEnum_SogangUniv_NpcType, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_ValueProp = { "percentList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_Key_KeyProp = { "percentList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_MetaData[] = {
		{ "ModuleRelativePath", "SogangUnivGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList = { "percentList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USogangUnivGameInstance, percentList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USogangUnivGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_EnemyInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_PlayerInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_UIItemInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_QuestInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_DailyQuestInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_SensingQuestInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_StretchingQuestInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_NpcTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_m_npcType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USogangUnivGameInstance_Statics::NewProp_percentList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USogangUnivGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USogangUnivGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USogangUnivGameInstance_Statics::ClassParams = {
		&USogangUnivGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USogangUnivGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USogangUnivGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USogangUnivGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USogangUnivGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USogangUnivGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USogangUnivGameInstance, 3715523746);
	template<> SOGANGUNIV_API UClass* StaticClass<USogangUnivGameInstance>()
	{
		return USogangUnivGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USogangUnivGameInstance(Z_Construct_UClass_USogangUnivGameInstance, &USogangUnivGameInstance::StaticClass, TEXT("/Script/SogangUniv"), TEXT("USogangUnivGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USogangUnivGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
