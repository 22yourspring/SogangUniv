// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Trigger/BoxTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxTrigger() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ABoxTrigger_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ABoxTrigger();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ATrigger();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void ABoxTrigger::StaticRegisterNativesABoxTrigger()
	{
	}
	UClass* Z_Construct_UClass_ABoxTrigger_NoRegister()
	{
		return ABoxTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ABoxTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Trigger/BoxTrigger.h" },
		{ "ModuleRelativePath", "Trigger/BoxTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxTrigger_Statics::ClassParams = {
		&ABoxTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABoxTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxTrigger, 748026058);
	template<> SOGANGUNIV_API UClass* StaticClass<ABoxTrigger>()
	{
		return ABoxTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxTrigger(Z_Construct_UClass_ABoxTrigger, &ABoxTrigger::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ABoxTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
