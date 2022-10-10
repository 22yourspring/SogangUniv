// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/NPCTriggerEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCTriggerEffect() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ANPCTriggerEffect_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ANPCTriggerEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ANPCTriggerEffect::StaticRegisterNativesANPCTriggerEffect()
	{
	}
	UClass* Z_Construct_UClass_ANPCTriggerEffect_NoRegister()
	{
		return ANPCTriggerEffect::StaticClass();
	}
	struct Z_Construct_UClass_ANPCTriggerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCTriggerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCTriggerEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/NPCTriggerEffect.h" },
		{ "ModuleRelativePath", "Effect/NPCTriggerEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCTriggerEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/NPCTriggerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Body = { "m_Body", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCTriggerEffect, m_Body), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCTriggerEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/NPCTriggerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCTriggerEffect, m_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCTriggerEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCTriggerEffect_Statics::NewProp_m_Particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCTriggerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCTriggerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCTriggerEffect_Statics::ClassParams = {
		&ANPCTriggerEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPCTriggerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTriggerEffect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCTriggerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTriggerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCTriggerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCTriggerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCTriggerEffect, 4013557654);
	template<> SOGANGUNIV_API UClass* StaticClass<ANPCTriggerEffect>()
	{
		return ANPCTriggerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCTriggerEffect(Z_Construct_UClass_ANPCTriggerEffect, &ANPCTriggerEffect::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ANPCTriggerEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCTriggerEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
