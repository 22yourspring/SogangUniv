// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectPlayer.h"
#include "../SogangUnivGameInstance.h"
#include "../CharacterSelectGameMode.h"
#include "../UI/CharacterSelectHUD.h"
#include "../UI/CharacterSelectState.h"

// Sets default values
ASelectPlayer::ASelectPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASelectPlayer::BeginPlay()
{
	Super::BeginPlay();

	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst)
	{
		const FPlayerTableInfo* Info = GameInst->FindPlayerInfo("Player");

		if (Info)
		{
			m_PlayerInfo.Name = Info->Name;
			m_PlayerInfo.Attack = Info->Attack;
			m_PlayerInfo.Armor = Info->Armor;
			m_PlayerInfo.HP = Info->HP;
			m_PlayerInfo.HPMax = Info->HPMax;
			m_PlayerInfo.MP = Info->MP;
			m_PlayerInfo.MPMax = Info->MPMax;
			m_PlayerInfo.Level = Info->Level;
			m_PlayerInfo.Exp = Info->Exp;
			m_PlayerInfo.Coin = Info->Coin;
			m_PlayerInfo.AttackDistance = Info->AttackDistance;
			m_PlayerInfo.AttackSpeed = Info->AttackSpeed;
			m_PlayerInfo.AttackAngle = Info->AttackAngle;
			m_PlayerInfo.MoveSpeed = Info->MoveSpeed;

			ACharacterSelectGameMode* GameMode = Cast<ACharacterSelectGameMode>(GetWorld()->GetAuthGameMode());
			UCharacterSelectHUD* SelectHUD = GameMode->GetSelectHUD();

			SelectHUD->SetCharacterInfo(m_PlayerInfo);
		}
	}
}

// Called every frame
void ASelectPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASelectPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

