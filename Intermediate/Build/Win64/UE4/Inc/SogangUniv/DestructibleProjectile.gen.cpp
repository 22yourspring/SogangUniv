// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/DestructibleProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleProjectile() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ADestructibleProjectile_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ADestructibleProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADestructibleProjectile::execProjectileBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileBounce(Z_Param_Out_result,Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADestructibleProjectile::execProjectileStop)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileStop(Z_Param_Out_result);
		P_NATIVE_END;
	}
	void ADestructibleProjectile::StaticRegisterNativesADestructibleProjectile()
	{
		UClass* Class = ADestructibleProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectileBounce", &ADestructibleProjectile::execProjectileBounce },
			{ "ProjectileStop", &ADestructibleProjectile::execProjectileStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics
	{
		struct DestructibleProjectile_eventProjectileBounce_Parms
		{
			FHitResult result;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestructibleProjectile_eventProjectileBounce_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestructibleProjectile_eventProjectileBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADestructibleProjectile, nullptr, "ProjectileBounce", nullptr, nullptr, sizeof(DestructibleProjectile_eventProjectileBounce_Parms), Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics
	{
		struct DestructibleProjectile_eventProjectileStop_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestructibleProjectile_eventProjectileStop_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADestructibleProjectile, nullptr, "ProjectileStop", nullptr, nullptr, sizeof(DestructibleProjectile_eventProjectileStop_Parms), Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADestructibleProjectile_NoRegister()
	{
		return ADestructibleProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ADestructibleProjectile_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DestroyTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_DestroyTimeMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestructibleProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADestructibleProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADestructibleProjectile_ProjectileBounce, "ProjectileBounce" }, // 1098785637
		{ &Z_Construct_UFunction_ADestructibleProjectile_ProjectileStop, "ProjectileStop" }, // 1500821390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/DestructibleProjectile.h" },
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DestructibleProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Body = { "m_Body", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructibleProjectile, m_Body), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DestructibleProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructibleProjectile, m_Mesh), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Movement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DestructibleProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Movement = { "m_Movement", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructibleProjectile, m_Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_DestroyTimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DestructibleProjectile" },
		{ "ModuleRelativePath", "Effect/DestructibleProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_DestroyTimeMax = { "m_DestroyTimeMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructibleProjectile, m_DestroyTimeMax), METADATA_PARAMS(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_DestroyTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_DestroyTimeMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructibleProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleProjectile_Statics::NewProp_m_DestroyTimeMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructibleProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructibleProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestructibleProjectile_Statics::ClassParams = {
		&ADestructibleProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADestructibleProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestructibleProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestructibleProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestructibleProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestructibleProjectile, 3671611686);
	template<> SOGANGUNIV_API UClass* StaticClass<ADestructibleProjectile>()
	{
		return ADestructibleProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestructibleProjectile(Z_Construct_UClass_ADestructibleProjectile, &ADestructibleProjectile::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ADestructibleProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructibleProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
