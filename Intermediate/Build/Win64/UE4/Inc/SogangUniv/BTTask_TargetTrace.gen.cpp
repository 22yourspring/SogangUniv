// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/AI/BTTask_TargetTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_TargetTrace() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTTask_TargetTrace_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTTask_TargetTrace();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void UBTTask_TargetTrace::StaticRegisterNativesUBTTask_TargetTrace()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_TargetTrace_NoRegister()
	{
		return UBTTask_TargetTrace::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_TargetTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_TargetTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_TargetTrace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_TargetTrace.h" },
		{ "ModuleRelativePath", "AI/BTTask_TargetTrace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_TargetTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_TargetTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_TargetTrace_Statics::ClassParams = {
		&UBTTask_TargetTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_TargetTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_TargetTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_TargetTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_TargetTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_TargetTrace, 2361291713);
	template<> SOGANGUNIV_API UClass* StaticClass<UBTTask_TargetTrace>()
	{
		return UBTTask_TargetTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_TargetTrace(Z_Construct_UClass_UBTTask_TargetTrace, &UBTTask_TargetTrace::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UBTTask_TargetTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_TargetTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
