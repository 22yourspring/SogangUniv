// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "AssetPathMain.generated.h"

/**
 * 
 */
UCLASS(Config=MainAsset)
class SOGANGUNIV_API UAssetPathMain : public UObject
{
	GENERATED_BODY()
	
public:
	UAssetPathMain();

private:
	UPROPERTY(Config)
	TArray<FAssetPathInfo>			MaterialPathArray;
	TMap<FString, FSoftObjectPath>	m_mapMaterialPath;

	UPROPERTY(Config)
	TArray<FAssetPathInfo>			ParticlePathArray;
	TMap<FString, FSoftObjectPath>	m_mapParticlePath;

	UPROPERTY(Config)
	TArray<FAssetPathInfo>			SoundPathArray;
	TMap<FString, FSoftObjectPath>	m_mapSoundPath;

public:
	void ConvertPath();
	const FSoftObjectPath* FindMaterialPath(const FString& Name);
	const FSoftObjectPath* FindParticlePath(const FString& Name);
	const FSoftObjectPath* FindSoundPath(const FString& Name);
};
