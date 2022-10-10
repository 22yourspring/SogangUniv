// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/SelectPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectPawn() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASelectPawn_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASelectPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASelectPawn::StaticRegisterNativesASelectPawn()
	{
	}
	UClass* Z_Construct_UClass_ASelectPawn_NoRegister()
	{
		return ASelectPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASelectPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelectPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SelectPawn.h" },
		{ "ModuleRelativePath", "Player/SelectPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectPawn_Statics::NewProp_m_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SelectPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SelectPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelectPawn_Statics::NewProp_m_Camera = { "m_Camera", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASelectPawn, m_Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASelectPawn_Statics::NewProp_m_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPawn_Statics::NewProp_m_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelectPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectPawn_Statics::NewProp_m_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelectPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelectPawn_Statics::ClassParams = {
		&ASelectPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASelectPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASelectPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelectPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelectPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelectPawn, 1141324885);
	template<> SOGANGUNIV_API UClass* StaticClass<ASelectPawn>()
	{
		return ASelectPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelectPawn(Z_Construct_UClass_ASelectPawn, &ASelectPawn::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ASelectPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelectPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
