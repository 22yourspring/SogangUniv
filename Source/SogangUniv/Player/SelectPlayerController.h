// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/PlayerController.h"
#include "SelectPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SOGANGUNIV_API ASelectPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ASelectPlayerController();

public:
	virtual void PlayerTick(float DeltaTime);
	virtual void SetupInputComponent();

public:
	void MouseClick();
	void MouseRelease();
	void Picking();
};
