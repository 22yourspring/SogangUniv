// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Enemy/EnemySpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnPoint() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemySpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APatrolPoint_NoRegister();
// End Cross Module References
	void AEnemySpawnPoint::StaticRegisterNativesAEnemySpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister()
	{
		return AEnemySpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_EnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SpawnTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PatrolPointArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PatrolPointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PatrolPointArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemySpawnPoint.h" },
		{ "ModuleRelativePath", "Enemy/EnemySpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_EnemyClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemySpawnPoint" },
		{ "ModuleRelativePath", "Enemy/EnemySpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_EnemyClass = { "m_EnemyClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawnPoint, m_EnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_EnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_EnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_SpawnTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemySpawnPoint" },
		{ "ModuleRelativePath", "Enemy/EnemySpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_SpawnTime = { "m_SpawnTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawnPoint, m_SpawnTime), METADATA_PARAMS(Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_SpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_SpawnTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray_Inner = { "m_PatrolPointArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemySpawnPoint" },
		{ "ModuleRelativePath", "Enemy/EnemySpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray = { "m_PatrolPointArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemySpawnPoint, m_PatrolPointArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_EnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_SpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_m_PatrolPointArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawnPoint_Statics::ClassParams = {
		&AEnemySpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemySpawnPoint, 540610084);
	template<> SOGANGUNIV_API UClass* StaticClass<AEnemySpawnPoint>()
	{
		return AEnemySpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawnPoint(Z_Construct_UClass_AEnemySpawnPoint, &AEnemySpawnPoint::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AEnemySpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
