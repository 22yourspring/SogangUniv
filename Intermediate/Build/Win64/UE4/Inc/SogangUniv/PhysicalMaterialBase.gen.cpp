// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Material/PhysicalMaterialBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialBase() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UPhysicalMaterialBase_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UPhysicalMaterialBase();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UPhysicalMaterialBase::StaticRegisterNativesUPhysicalMaterialBase()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterialBase_NoRegister()
	{
		return UPhysicalMaterialBase::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Material/PhysicalMaterialBase.h" },
		{ "ModuleRelativePath", "Material/PhysicalMaterialBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PhysicalMaterialBase" },
		{ "ModuleRelativePath", "Material/PhysicalMaterialBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Sound = { "m_Sound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialBase, m_Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PhysicalMaterialBase" },
		{ "ModuleRelativePath", "Material/PhysicalMaterialBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialBase, m_Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialBase_Statics::NewProp_m_Particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialBase_Statics::ClassParams = {
		&UPhysicalMaterialBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialBase_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalMaterialBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalMaterialBase, 188768452);
	template<> SOGANGUNIV_API UClass* StaticClass<UPhysicalMaterialBase>()
	{
		return UPhysicalMaterialBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterialBase(Z_Construct_UClass_UPhysicalMaterialBase, &UPhysicalMaterialBase::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UPhysicalMaterialBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
