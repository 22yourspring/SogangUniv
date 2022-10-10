// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/SelectPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectPlayerController() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASelectPlayerController_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASelectPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void ASelectPlayerController::StaticRegisterNativesASelectPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASelectPlayerController_NoRegister()
	{
		return ASelectPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASelectPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelectPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/SelectPlayerController.h" },
		{ "ModuleRelativePath", "Player/SelectPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelectPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelectPlayerController_Statics::ClassParams = {
		&ASelectPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASelectPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelectPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelectPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelectPlayerController, 2320676696);
	template<> SOGANGUNIV_API UClass* StaticClass<ASelectPlayerController>()
	{
		return ASelectPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelectPlayerController(Z_Construct_UClass_ASelectPlayerController, &ASelectPlayerController::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ASelectPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelectPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
