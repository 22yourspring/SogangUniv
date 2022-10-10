// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/EffectDecal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectDecal() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEffectDecal_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEffectDecal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	void AEffectDecal::StaticRegisterNativesAEffectDecal()
	{
	}
	UClass* Z_Construct_UClass_AEffectDecal_NoRegister()
	{
		return AEffectDecal::StaticClass();
	}
	struct Z_Construct_UClass_AEffectDecal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Decal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Decal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectDecal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectDecal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/EffectDecal.h" },
		{ "ModuleRelativePath", "Effect/EffectDecal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectDecal_Statics::NewProp_m_Decal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EffectDecal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/EffectDecal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectDecal_Statics::NewProp_m_Decal = { "m_Decal", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEffectDecal, m_Decal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEffectDecal_Statics::NewProp_m_Decal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectDecal_Statics::NewProp_m_Decal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectDecal_Statics::NewProp_m_Decal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectDecal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectDecal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEffectDecal_Statics::ClassParams = {
		&AEffectDecal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEffectDecal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEffectDecal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEffectDecal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectDecal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEffectDecal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEffectDecal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEffectDecal, 1816589678);
	template<> SOGANGUNIV_API UClass* StaticClass<AEffectDecal>()
	{
		return AEffectDecal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEffectDecal(Z_Construct_UClass_AEffectDecal, &AEffectDecal::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AEffectDecal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectDecal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
