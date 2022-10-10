// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/RangeCatAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeCatAttack() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ARangeCatAttack_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ARangeCatAttack();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AParticleProjectile();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void ARangeCatAttack::StaticRegisterNativesARangeCatAttack()
	{
	}
	UClass* Z_Construct_UClass_ARangeCatAttack_NoRegister()
	{
		return ARangeCatAttack::StaticClass();
	}
	struct Z_Construct_UClass_ARangeCatAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ParticleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_ParticleDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangeCatAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AParticleProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeCatAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effect/RangeCatAttack.h" },
		{ "ModuleRelativePath", "Effect/RangeCatAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeCatAttack_Statics::NewProp_m_ParticleDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RangeCatAttack" },
		{ "ModuleRelativePath", "Effect/RangeCatAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeCatAttack_Statics::NewProp_m_ParticleDistance = { "m_ParticleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeCatAttack, m_ParticleDistance), METADATA_PARAMS(Z_Construct_UClass_ARangeCatAttack_Statics::NewProp_m_ParticleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeCatAttack_Statics::NewProp_m_ParticleDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangeCatAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeCatAttack_Statics::NewProp_m_ParticleDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangeCatAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeCatAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangeCatAttack_Statics::ClassParams = {
		&ARangeCatAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARangeCatAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARangeCatAttack_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARangeCatAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeCatAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangeCatAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangeCatAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangeCatAttack, 1982646401);
	template<> SOGANGUNIV_API UClass* StaticClass<ARangeCatAttack>()
	{
		return ARangeCatAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangeCatAttack(Z_Construct_UClass_ARangeCatAttack, &ARangeCatAttack::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ARangeCatAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeCatAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
