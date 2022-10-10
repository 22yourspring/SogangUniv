// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/Bottle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBottle() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ABottle_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ABottle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ABottle::StaticRegisterNativesABottle()
	{
	}
	UClass* Z_Construct_UClass_ABottle_NoRegister()
	{
		return ABottle::StaticClass();
	}
	struct Z_Construct_UClass_ABottle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABottle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABottle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Bottle.h" },
		{ "ModuleRelativePath", "Player/Bottle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABottle_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bottle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Bottle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABottle_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABottle, m_Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABottle_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::NewProp_m_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABottle_Statics::NewProp_m_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABottle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABottle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABottle_Statics::ClassParams = {
		&ABottle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABottle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABottle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABottle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABottle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABottle, 3016463674);
	template<> SOGANGUNIV_API UClass* StaticClass<ABottle>()
	{
		return ABottle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABottle(Z_Construct_UClass_ABottle, &ABottle::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ABottle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABottle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
