// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/Pspsps_CatSkill1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePspsps_CatSkill1() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_APspsps_CatSkill1_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APspsps_CatSkill1();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ADestructibleProjectile();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void APspsps_CatSkill1::StaticRegisterNativesAPspsps_CatSkill1()
	{
	}
	UClass* Z_Construct_UClass_APspsps_CatSkill1_NoRegister()
	{
		return APspsps_CatSkill1::StaticClass();
	}
	struct Z_Construct_UClass_APspsps_CatSkill1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APspsps_CatSkill1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADestructibleProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APspsps_CatSkill1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effect/Pspsps_CatSkill1.h" },
		{ "ModuleRelativePath", "Effect/Pspsps_CatSkill1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APspsps_CatSkill1_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pspsps_CatSkill1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/Pspsps_CatSkill1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APspsps_CatSkill1_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APspsps_CatSkill1, m_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APspsps_CatSkill1_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_CatSkill1_Statics::NewProp_m_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APspsps_CatSkill1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APspsps_CatSkill1_Statics::NewProp_m_Particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APspsps_CatSkill1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APspsps_CatSkill1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APspsps_CatSkill1_Statics::ClassParams = {
		&APspsps_CatSkill1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APspsps_CatSkill1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_CatSkill1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APspsps_CatSkill1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_CatSkill1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APspsps_CatSkill1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APspsps_CatSkill1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APspsps_CatSkill1, 2630618139);
	template<> SOGANGUNIV_API UClass* StaticClass<APspsps_CatSkill1>()
	{
		return APspsps_CatSkill1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APspsps_CatSkill1(Z_Construct_UClass_APspsps_CatSkill1, &APspsps_CatSkill1::StaticClass, TEXT("/Script/SogangUniv"), TEXT("APspsps_CatSkill1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APspsps_CatSkill1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
