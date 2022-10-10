// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/ParticleProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleProjectile() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_AParticleProjectile_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AParticleProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AParticleProjectile::execProjectileStop)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileStop(Z_Param_Out_result);
		P_NATIVE_END;
	}
	void AParticleProjectile::StaticRegisterNativesAParticleProjectile()
	{
		UClass* Class = AParticleProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectileStop", &AParticleProjectile::execProjectileStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics
	{
		struct ParticleProjectile_eventProjectileStop_Parms
		{
			FHitResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleProjectile_eventProjectileStop_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect/ParticleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticleProjectile, nullptr, "ProjectileStop", nullptr, nullptr, sizeof(ParticleProjectile_eventProjectileStop_Parms), Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticleProjectile_ProjectileStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticleProjectile_ProjectileStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParticleProjectile_NoRegister()
	{
		return AParticleProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AParticleProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticleProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParticleProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParticleProjectile_ProjectileStop, "ProjectileStop" }, // 3825951920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/ParticleProjectile.h" },
		{ "ModuleRelativePath", "Effect/ParticleProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ParticleProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/ParticleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Body = { "m_Body", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticleProjectile, m_Body), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ParticleProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/ParticleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticleProjectile, m_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Movement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ParticleProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/ParticleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Movement = { "m_Movement", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticleProjectile, m_Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ParticleProjectile" },
		{ "ModuleRelativePath", "Effect/ParticleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Distance = { "m_Distance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticleProjectile, m_Distance), METADATA_PARAMS(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticleProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleProjectile_Statics::NewProp_m_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticleProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticleProjectile_Statics::ClassParams = {
		&AParticleProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParticleProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AParticleProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParticleProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticleProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParticleProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticleProjectile, 2737421182);
	template<> SOGANGUNIV_API UClass* StaticClass<AParticleProjectile>()
	{
		return AParticleProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticleProjectile(Z_Construct_UClass_AParticleProjectile, &AParticleProjectile::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AParticleProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
