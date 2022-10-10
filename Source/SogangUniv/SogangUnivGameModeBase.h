// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameInfo.h"
#include "UI/MainHUD.h"
#include "AssetManager/AssetPathMain.h"
#include "GameFramework/GameModeBase.h"
#include "SogangUnivGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API ASogangUnivGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASogangUnivGameModeBase();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UMainHUD>	m_MainHUDClass;

	UMainHUD*				m_MainHUD;

	UAssetPathMain*			m_MainAssetPath;

public:
	UMainHUD* GetMainHUD() { return m_MainHUD; }

public:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
