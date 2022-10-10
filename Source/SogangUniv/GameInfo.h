// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "DrawDebugHelpers.h"
#include "DestructibleComponent.h"
#include "Engine.h"
#include "Engine/AssetManager.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "GameInfo.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SogangUniv, Log, All);
#define LOG_CALLINFO	(FString(__FUNCTION__) + TEXT(" __ ") + FString::FromInt(__LINE__) + TEXT(" __ "))
#define LOG(Format, ...)	UE_LOG(SogangUniv, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))
#define LOG_STRING(__LogMessage)		UE_LOG(SogangUniv, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *__LogMessage)

void PrintViewPort(float Time, const FColor& Color, const FString& Text);

#define	PACKET_SIZE	1024

UENUM(BlueprintType)
enum class ECheckDistanceType : uint8
{
	Trace,
	Attack
};

UENUM(BlueprintType)
enum class ETriggerType : uint8
{
	Box,
	Sphere,
	Capsule
};

UENUM(BlueprintType)
enum class EQuestType : uint8
{
	SENSING,
	NORMAL,
	STRETCHING,
	SLEEP,
};

UENUM(BlueprintType)
enum class EQuestButtonType : uint8
{
	NONE,
	NEXT,
	EXIT,
	REWARD,
	COMPLETE,
	QUESTING
};

UENUM(BlueprintType)
enum class EQuestScriptType : uint8
{
	NONE,
	IMAGE_SEND,
	IMAGE_SEND_1,
	WRITE,
};

UENUM(BlueprintType)
enum class NpcType : uint8
{
	SHOP,
	QUEST
};

enum class NetworkProtocol
{
	Chat,
	UserConnect,
	File,
	QuestComplete
};

USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString		Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		MPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Exp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32		Coin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		AttackAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float		MoveSpeed;
};

USTRUCT(BlueprintType)
struct FUIItemTableInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString	Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString	IconPath;
};

USTRUCT()
struct FAssetPathInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Path")
	FString				Name;

	UPROPERTY(EditAnywhere, Category = "Path")
	FSoftObjectPath		Path;
};
USTRUCT()
struct FQusetPlayInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Path")
	bool complete;
	UPROPERTY(EditAnywhere, Category = "Path")
	int value;
};

USTRUCT(BlueprintType)
struct FQuestButtonInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString m_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EQuestButtonType m_type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32 m_index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32 m_reward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32 m_timer;
};

USTRUCT(BlueprintType)
struct FQuestInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString Desc; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString DescImagePath;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EQuestScriptType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<FQuestButtonInfo> m_ButtonList;
};

USTRUCT(BlueprintType)
struct FQuestTableInfo :
	public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EQuestType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<FQuestInfo> InfoArray;
};

USTRUCT(BlueprintType)
struct FCookieMessageInfo :
	public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString Message;
};

struct FQuestData
{
	FString Name;
	TArray<bool> CompleteArray;
	bool Complete;
};

struct RecvQueueData
{
	int32	Protocol;
	int32	Length;
	uint8	Packet[PACKET_SIZE];

	RecvQueueData() :
		Protocol(-1),
		Length(0),
		Packet{}
	{
	}
};
