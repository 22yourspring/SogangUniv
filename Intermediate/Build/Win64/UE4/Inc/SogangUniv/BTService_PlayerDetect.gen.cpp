// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/AI/BTService_PlayerDetect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayerDetect() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTService_PlayerDetect_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTService_PlayerDetect();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void UBTService_PlayerDetect::StaticRegisterNativesUBTService_PlayerDetect()
	{
	}
	UClass* Z_Construct_UClass_UBTService_PlayerDetect_NoRegister()
	{
		return UBTService_PlayerDetect::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_PlayerDetect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_PlayerDetect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_PlayerDetect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTService_PlayerDetect.h" },
		{ "ModuleRelativePath", "AI/BTService_PlayerDetect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_PlayerDetect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayerDetect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayerDetect_Statics::ClassParams = {
		&UBTService_PlayerDetect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_PlayerDetect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerDetect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_PlayerDetect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_PlayerDetect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_PlayerDetect, 1267991435);
	template<> SOGANGUNIV_API UClass* StaticClass<UBTService_PlayerDetect>()
	{
		return UBTService_PlayerDetect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_PlayerDetect(Z_Construct_UClass_UBTService_PlayerDetect, &UBTService_PlayerDetect::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UBTService_PlayerDetect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayerDetect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
