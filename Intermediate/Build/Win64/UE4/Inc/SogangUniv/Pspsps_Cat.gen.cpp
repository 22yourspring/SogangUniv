// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/Pspsps_Cat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePspsps_Cat() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_APspsps_Cat_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APspsps_Cat();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void APspsps_Cat::StaticRegisterNativesAPspsps_Cat()
	{
	}
	UClass* Z_Construct_UClass_APspsps_Cat_NoRegister()
	{
		return APspsps_Cat::StaticClass();
	}
	struct Z_Construct_UClass_APspsps_Cat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AttackMontageArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackMontageArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_AttackMontageArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SkillMontageArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SkillMontageArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SkillMontageArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APspsps_Cat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APspsps_Cat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Pspsps_Cat.h" },
		{ "ModuleRelativePath", "Player/Pspsps_Cat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray_Inner = { "m_AttackMontageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pspsps_Cat" },
		{ "ModuleRelativePath", "Player/Pspsps_Cat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray = { "m_AttackMontageArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APspsps_Cat, m_AttackMontageArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray_Inner = { "m_SkillMontageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pspsps_Cat" },
		{ "ModuleRelativePath", "Player/Pspsps_Cat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray = { "m_SkillMontageArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APspsps_Cat, m_SkillMontageArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APspsps_Cat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_AttackMontageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APspsps_Cat_Statics::NewProp_m_SkillMontageArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APspsps_Cat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APspsps_Cat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APspsps_Cat_Statics::ClassParams = {
		&APspsps_Cat::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APspsps_Cat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_Cat_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APspsps_Cat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APspsps_Cat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APspsps_Cat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APspsps_Cat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APspsps_Cat, 1776978051);
	template<> SOGANGUNIV_API UClass* StaticClass<APspsps_Cat>()
	{
		return APspsps_Cat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APspsps_Cat(Z_Construct_UClass_APspsps_Cat, &APspsps_Cat::StaticClass, TEXT("/Script/SogangUniv"), TEXT("APspsps_Cat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APspsps_Cat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
