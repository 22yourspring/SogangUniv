// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/CharacterSelectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelectGameMode() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ACharacterSelectGameMode_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ACharacterSelectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterSelectHUD_NoRegister();
// End Cross Module References
	void ACharacterSelectGameMode::StaticRegisterNativesACharacterSelectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACharacterSelectGameMode_NoRegister()
	{
		return ACharacterSelectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterSelectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SelectHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_SelectHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterSelectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterSelectGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CharacterSelectGameMode.h" },
		{ "ModuleRelativePath", "CharacterSelectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterSelectGameMode_Statics::NewProp_m_SelectHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterSelectGameMode" },
		{ "ModuleRelativePath", "CharacterSelectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterSelectGameMode_Statics::NewProp_m_SelectHUDClass = { "m_SelectHUDClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterSelectGameMode, m_SelectHUDClass), Z_Construct_UClass_UCharacterSelectHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACharacterSelectGameMode_Statics::NewProp_m_SelectHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterSelectGameMode_Statics::NewProp_m_SelectHUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterSelectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterSelectGameMode_Statics::NewProp_m_SelectHUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterSelectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterSelectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterSelectGameMode_Statics::ClassParams = {
		&ACharacterSelectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterSelectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterSelectGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterSelectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterSelectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterSelectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterSelectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterSelectGameMode, 3025299131);
	template<> SOGANGUNIV_API UClass* StaticClass<ACharacterSelectGameMode>()
	{
		return ACharacterSelectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterSelectGameMode(Z_Construct_UClass_ACharacterSelectGameMode, &ACharacterSelectGameMode::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ACharacterSelectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterSelectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
