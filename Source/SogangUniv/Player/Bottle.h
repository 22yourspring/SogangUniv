// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Actor.h"
#include "Bottle.generated.h"

UCLASS()
class SOGANGUNIV_API ABottle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABottle();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent*	m_Mesh;

public:
	void SetMesh(const FString& Path);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
