// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Enemy/Enemy_MeleeCat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_MeleeCat() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemy_MeleeCat_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemy_MeleeCat();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEnemy_Cat();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void AEnemy_MeleeCat::StaticRegisterNativesAEnemy_MeleeCat()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_MeleeCat_NoRegister()
	{
		return AEnemy_MeleeCat::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_MeleeCat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_MeleeCat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_Cat,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MeleeCat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Enemy_MeleeCat.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_MeleeCat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_MeleeCat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_MeleeCat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_MeleeCat_Statics::ClassParams = {
		&AEnemy_MeleeCat::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_MeleeCat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MeleeCat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_MeleeCat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_MeleeCat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_MeleeCat, 392921588);
	template<> SOGANGUNIV_API UClass* StaticClass<AEnemy_MeleeCat>()
	{
		return AEnemy_MeleeCat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_MeleeCat(Z_Construct_UClass_AEnemy_MeleeCat, &AEnemy_MeleeCat::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AEnemy_MeleeCat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_MeleeCat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
