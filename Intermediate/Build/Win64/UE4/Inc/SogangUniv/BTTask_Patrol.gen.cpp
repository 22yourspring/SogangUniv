// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/AI/BTTask_Patrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Patrol() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTTask_Patrol_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTTask_Patrol();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void UBTTask_Patrol::StaticRegisterNativesUBTTask_Patrol()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Patrol_NoRegister()
	{
		return UBTTask_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Patrol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_Patrol.h" },
		{ "ModuleRelativePath", "AI/BTTask_Patrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Patrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Patrol_Statics::ClassParams = {
		&UBTTask_Patrol::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Patrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Patrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Patrol, 3334164993);
	template<> SOGANGUNIV_API UClass* StaticClass<UBTTask_Patrol>()
	{
		return UBTTask_Patrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Patrol(Z_Construct_UClass_UBTTask_Patrol, &UBTTask_Patrol::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UBTTask_Patrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Patrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
