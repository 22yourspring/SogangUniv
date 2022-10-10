// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/StartGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartGameMode() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_AStartGameMode_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AStartGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UStartWidget_NoRegister();
// End Cross Module References
	void AStartGameMode::StaticRegisterNativesAStartGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStartGameMode_NoRegister()
	{
		return AStartGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStartGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_StartHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StartGameMode.h" },
		{ "ModuleRelativePath", "StartGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartGameMode_Statics::NewProp_m_StartHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StartGameMode" },
		{ "ModuleRelativePath", "StartGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStartGameMode_Statics::NewProp_m_StartHUDClass = { "m_StartHUDClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartGameMode, m_StartHUDClass), Z_Construct_UClass_UStartWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStartGameMode_Statics::NewProp_m_StartHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::NewProp_m_StartHUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartGameMode_Statics::NewProp_m_StartHUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStartGameMode_Statics::ClassParams = {
		&AStartGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStartGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStartGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStartGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStartGameMode, 4094108577);
	template<> SOGANGUNIV_API UClass* StaticClass<AStartGameMode>()
	{
		return AStartGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStartGameMode(Z_Construct_UClass_AStartGameMode, &AStartGameMode::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AStartGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
