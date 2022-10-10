// Fill out your copyright notice in the Description page of Project Settings.
#include "NPCTrigger.h"
#include "../Effect/NPCTriggerEffect.h"
#include "../SogangUnivGameInstance.h"

#include "../UI/QuestNPCWidget.h"
#include "../SogangUnivGameModeBase.h"

// Sets default values
ANPCTrigger::ANPCTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANPCTrigger::BeginPlay()
{
	Super::BeginPlay();

	m_TriggerBeginDelegate.AddDynamic(this, &ANPCTrigger::TriggerBegin);
	m_TriggerEndDelegate.AddDynamic(this, &ANPCTrigger::TriggerEnd);
}

// Called every frame
void ANPCTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCTrigger::TriggerBegin()
{
	PrintViewPort(1.f, FColor::Orange, TEXT("NPC Trigger In"));

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	ASogangUnivGameModeBase* pGameMode = Cast<ASogangUnivGameModeBase>(GetWorld()->GetAuthGameMode());

	UMainHUD* pMainHUD = pGameMode->GetMainHUD();

	pMainHUD->GetQuestNPC()->SetRender(true);

	GameInst->SetNPCTrigger(true);
	GameInst->SetNPCType(Type);
}

void ANPCTrigger::TriggerEnd()
{
	PrintViewPort(1.f, FColor::Orange, TEXT("NPC Trigger Exit"));
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
	GameInst->SetNPCTrigger(false);
}