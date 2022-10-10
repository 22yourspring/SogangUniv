// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/NormalEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalEffect() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ANormalEffect_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ANormalEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANormalEffect::execParticleFinish)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParticleFinish(Z_Param_Particle);
		P_NATIVE_END;
	}
	void ANormalEffect::StaticRegisterNativesANormalEffect()
	{
		UClass* Class = ANormalEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParticleFinish", &ANormalEffect::execParticleFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics
	{
		struct NormalEffect_eventParticleFinish_Parms
		{
			UParticleSystemComponent* Particle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::NewProp_Particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NormalEffect_eventParticleFinish_Parms, Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::NewProp_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect/NormalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalEffect, nullptr, "ParticleFinish", nullptr, nullptr, sizeof(NormalEffect_eventParticleFinish_Parms), Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANormalEffect_ParticleFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANormalEffect_ParticleFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANormalEffect_NoRegister()
	{
		return ANormalEffect::StaticClass();
	}
	struct Z_Construct_UClass_ANormalEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANormalEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANormalEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANormalEffect_ParticleFinish, "ParticleFinish" }, // 81531188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/NormalEffect.h" },
		{ "ModuleRelativePath", "Effect/NormalEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalEffect_Statics::NewProp_m_ParticleSystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NormalEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/NormalEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalEffect_Statics::NewProp_m_ParticleSystem = { "m_ParticleSystem", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANormalEffect, m_ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANormalEffect_Statics::NewProp_m_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANormalEffect_Statics::NewProp_m_ParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANormalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalEffect_Statics::NewProp_m_ParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANormalEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANormalEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANormalEffect_Statics::ClassParams = {
		&ANormalEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANormalEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANormalEffect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANormalEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANormalEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANormalEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANormalEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANormalEffect, 2801076068);
	template<> SOGANGUNIV_API UClass* StaticClass<ANormalEffect>()
	{
		return ANormalEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANormalEffect(Z_Construct_UClass_ANormalEffect, &ANormalEffect::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ANormalEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANormalEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
