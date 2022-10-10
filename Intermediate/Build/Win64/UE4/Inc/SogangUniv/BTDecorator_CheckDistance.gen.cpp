// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/AI/BTDecorator_CheckDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckDistance() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTDecorator_CheckDistance_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UBTDecorator_CheckDistance();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_ECheckDistanceType();
// End Cross Module References
	void UBTDecorator_CheckDistance::StaticRegisterNativesUBTDecorator_CheckDistance()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_CheckDistance_NoRegister()
	{
		return UBTDecorator_CheckDistance::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CheckDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_CheckType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CheckType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_CheckType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTDecorator_CheckDistance.h" },
		{ "ModuleRelativePath", "AI/BTDecorator_CheckDistance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTDecorator_CheckDistance" },
		{ "ModuleRelativePath", "AI/BTDecorator_CheckDistance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType = { "m_CheckType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_CheckDistance, m_CheckType), Z_Construct_UEnum_SogangUniv_ECheckDistanceType, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::NewProp_m_CheckType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckDistance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::ClassParams = {
		&UBTDecorator_CheckDistance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CheckDistance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_CheckDistance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_CheckDistance, 4091665282);
	template<> SOGANGUNIV_API UClass* StaticClass<UBTDecorator_CheckDistance>()
	{
		return UBTDecorator_CheckDistance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_CheckDistance(Z_Construct_UClass_UBTDecorator_CheckDistance, &UBTDecorator_CheckDistance::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UBTDecorator_CheckDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
