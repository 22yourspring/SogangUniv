// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/AssetManager/AssetPathMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetPathMain() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UAssetPathMain_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UAssetPathMain();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FAssetPathInfo();
// End Cross Module References
	void UAssetPathMain::StaticRegisterNativesUAssetPathMain()
	{
	}
	UClass* Z_Construct_UClass_UAssetPathMain_NoRegister()
	{
		return UAssetPathMain::StaticClass();
	}
	struct Z_Construct_UClass_UAssetPathMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialPathArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPathArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialPathArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticlePathArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticlePathArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticlePathArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundPathArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundPathArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundPathArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetPathMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPathMain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetManager/AssetPathMain.h" },
		{ "ModuleRelativePath", "AssetManager/AssetPathMain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray_Inner = { "MaterialPathArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetPathInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray_MetaData[] = {
		{ "ModuleRelativePath", "AssetManager/AssetPathMain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray = { "MaterialPathArray", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPathMain, MaterialPathArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray_Inner = { "ParticlePathArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetPathInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray_MetaData[] = {
		{ "ModuleRelativePath", "AssetManager/AssetPathMain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray = { "ParticlePathArray", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPathMain, ParticlePathArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray_Inner = { "SoundPathArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetPathInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray_MetaData[] = {
		{ "ModuleRelativePath", "AssetManager/AssetPathMain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray = { "SoundPathArray", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPathMain, SoundPathArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetPathMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPathMain_Statics::NewProp_MaterialPathArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPathMain_Statics::NewProp_ParticlePathArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPathMain_Statics::NewProp_SoundPathArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetPathMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetPathMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetPathMain_Statics::ClassParams = {
		&UAssetPathMain::StaticClass,
		"MainAsset",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetPathMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPathMain_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetPathMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPathMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetPathMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetPathMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetPathMain, 2499954433);
	template<> SOGANGUNIV_API UClass* StaticClass<UAssetPathMain>()
	{
		return UAssetPathMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetPathMain(Z_Construct_UClass_UAssetPathMain, &UAssetPathMain::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UAssetPathMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetPathMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
