// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/Pspsps_CatSkill1Decal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePspsps_CatSkill1Decal() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_APspsps_CatSkill1Decal_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APspsps_CatSkill1Decal();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEffectDecal();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void APspsps_CatSkill1Decal::StaticRegisterNativesAPspsps_CatSkill1Decal()
	{
	}
	UClass* Z_Construct_UClass_APspsps_CatSkill1Decal_NoRegister()
	{
		return APspsps_CatSkill1Decal::StaticClass();
	}
	struct Z_Construct_UClass_APspsps_CatSkill1Decal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEffectDecal,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effect/Pspsps_CatSkill1Decal.h" },
		{ "ModuleRelativePath", "Effect/Pspsps_CatSkill1Decal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APspsps_CatSkill1Decal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::ClassParams = {
		&APspsps_CatSkill1Decal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APspsps_CatSkill1Decal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APspsps_CatSkill1Decal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APspsps_CatSkill1Decal, 2586667713);
	template<> SOGANGUNIV_API UClass* StaticClass<APspsps_CatSkill1Decal>()
	{
		return APspsps_CatSkill1Decal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APspsps_CatSkill1Decal(Z_Construct_UClass_APspsps_CatSkill1Decal, &APspsps_CatSkill1Decal::StaticClass, TEXT("/Script/SogangUniv"), TEXT("APspsps_CatSkill1Decal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APspsps_CatSkill1Decal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
