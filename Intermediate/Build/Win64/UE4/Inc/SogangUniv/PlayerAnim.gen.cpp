// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/PlayerAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnim() {}
// Cross Module References
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EPlayerAnimType();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UPlayerAnim_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UPlayerAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static UEnum* EPlayerAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_EPlayerAnimType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EPlayerAnimType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<EPlayerAnimType>()
	{
		return EPlayerAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerAnimType(EPlayerAnimType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("EPlayerAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_EPlayerAnimType_Hash() { return 4119200784U; }
	UEnum* Z_Construct_UEnum_SogangUniv_EPlayerAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerAnimType"), 0, Get_Z_Construct_UEnum_SogangUniv_EPlayerAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerAnimType::Ground", (int64)EPlayerAnimType::Ground },
				{ "EPlayerAnimType::Jump", (int64)EPlayerAnimType::Jump },
				{ "EPlayerAnimType::Death", (int64)EPlayerAnimType::Death },
				{ "EPlayerAnimType::NPC_Interaction", (int64)EPlayerAnimType::NPC_Interaction },
				{ "EPlayerAnimType::Object_Interaction", (int64)EPlayerAnimType::Object_Interaction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "Death.Comment", "/**\n * \n */" },
				{ "Death.Name", "EPlayerAnimType::Death" },
				{ "Ground.Comment", "/**\n * \n */" },
				{ "Ground.Name", "EPlayerAnimType::Ground" },
				{ "Jump.Comment", "/**\n * \n */" },
				{ "Jump.Name", "EPlayerAnimType::Jump" },
				{ "ModuleRelativePath", "Player/PlayerAnim.h" },
				{ "NPC_Interaction.Comment", "/**\n * \n */" },
				{ "NPC_Interaction.Name", "EPlayerAnimType::NPC_Interaction" },
				{ "Object_Interaction.Comment", "/**\n * \n */" },
				{ "Object_Interaction.Name", "EPlayerAnimType::Object_Interaction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"EPlayerAnimType",
				"EPlayerAnimType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_RightStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RightStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_LeftStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_LeftStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_FallStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_FallStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_SkillFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SkillFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_JumpEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_JumpEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_InteractionEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InteractionEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_AttackCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_NormalAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NormalAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnim::execAnimNotify_AttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackEnd();
		P_NATIVE_END;
	}
	void UPlayerAnim::StaticRegisterNativesUPlayerAnim()
	{
		UClass* Class = UPlayerAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackCombo", &UPlayerAnim::execAnimNotify_AttackCombo },
			{ "AnimNotify_AttackEnd", &UPlayerAnim::execAnimNotify_AttackEnd },
			{ "AnimNotify_FallStart", &UPlayerAnim::execAnimNotify_FallStart },
			{ "AnimNotify_InteractionEnd", &UPlayerAnim::execAnimNotify_InteractionEnd },
			{ "AnimNotify_JumpEnd", &UPlayerAnim::execAnimNotify_JumpEnd },
			{ "AnimNotify_LeftStep", &UPlayerAnim::execAnimNotify_LeftStep },
			{ "AnimNotify_NormalAttack", &UPlayerAnim::execAnimNotify_NormalAttack },
			{ "AnimNotify_RightStep", &UPlayerAnim::execAnimNotify_RightStep },
			{ "AnimNotify_SkillFire", &UPlayerAnim::execAnimNotify_SkillFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_AttackCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_FallStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_InteractionEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_JumpEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_LeftStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_NormalAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_RightStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnim, nullptr, "AnimNotify_SkillFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerAnim_NoRegister()
	{
		return UPlayerAnim::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Attack_MetaData[];
#endif
		static void NewProp_m_Attack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Interaction_MetaData[];
#endif
		static void NewProp_m_Interaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_Interaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_OnGround_MetaData[];
#endif
		static void NewProp_m_OnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_OnGround;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_AnimType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_AnimType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackCombo, "AnimNotify_AttackCombo" }, // 4046427291
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_AttackEnd, "AnimNotify_AttackEnd" }, // 3447750752
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_FallStart, "AnimNotify_FallStart" }, // 2549124661
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_InteractionEnd, "AnimNotify_InteractionEnd" }, // 1174424629
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_JumpEnd, "AnimNotify_JumpEnd" }, // 1759942733
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_LeftStep, "AnimNotify_LeftStep" }, // 2804307603
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_NormalAttack, "AnimNotify_NormalAttack" }, // 3388984376
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_RightStep, "AnimNotify_RightStep" }, // 4287559083
		{ &Z_Construct_UFunction_UPlayerAnim_AnimNotify_SkillFire, "AnimNotify_SkillFire" }, // 3006815121
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnim.h" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Direction = { "m_Direction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, m_Direction), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Speed = { "m_Speed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, m_Speed), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->m_Attack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack = { "m_Attack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->m_Interaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction = { "m_Interaction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->m_OnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround = { "m_OnGround", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType = { "m_AnimType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, m_AnimType), Z_Construct_UEnum_SogangUniv_EPlayerAnimType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_OnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_m_AnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnim_Statics::ClassParams = {
		&UPlayerAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnim, 1478555950);
	template<> SOGANGUNIV_API UClass* StaticClass<UPlayerAnim>()
	{
		return UPlayerAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnim(Z_Construct_UClass_UPlayerAnim, &UPlayerAnim::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UPlayerAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
