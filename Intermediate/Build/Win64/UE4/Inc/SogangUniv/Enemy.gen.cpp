// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Enemy/Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyInfo();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FEnemyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EnemyInfo"), sizeof(FEnemyInfo), Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FEnemyInfo>()
{
	return FEnemyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyInfo(FEnemyInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("EnemyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFEnemyInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFEnemyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyInfo")),new UScriptStruct::TCppStructOps<FEnemyInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFEnemyInfo;
	struct Z_Construct_UScriptStruct_FEnemyInfo_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, Armor), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, HPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MPMax = { "MPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, MPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Coin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Coin = { "Coin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, Coin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Coin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Coin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, AttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackAngle = { "AttackAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, AttackAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, TraceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_TraceDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Coin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AttackAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_TraceDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"EnemyInfo",
		sizeof(FEnemyInfo),
		alignof(FEnemyInfo),
		Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyInfo"), sizeof(FEnemyInfo), Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash() { return 1176607197U; }
	DEFINE_FUNCTION(AEnemy::execNameWidgetCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NameWidgetCallback();
		P_NATIVE_END;
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NameWidgetCallback", &AEnemy::execNameWidgetCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_NameWidgetCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_NameWidgetCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_NameWidgetCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "NameWidgetCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_NameWidgetCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_NameWidgetCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_NameWidgetCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_NameWidgetCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EnemyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_EnemyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HPBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_NameWidgetCallback, "NameWidgetCallback" }, // 78276941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Enemy.h" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyInfo = { "m_EnemyInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_EnemyInfo), Z_Construct_UScriptStruct_FEnemyInfo, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_HPBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_HPBar = { "m_HPBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_HPBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_HPBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_EnemyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_HPBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy, 3766810806);
	template<> SOGANGUNIV_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy(Z_Construct_UClass_AEnemy, &AEnemy::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
