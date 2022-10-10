// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnim.h"
#include "../Effect/HitCameraShake.h"
#include "../SogangUnivGameModeBase.h"
#include "../UI/MainHUD.h"
#include "../UI/CharacterHUD.h"
#include "../UI/HPBar.h"
#include "Engine/TextureRenderTarget2D.h"
#include "../SogangUnivGameInstance.h"
#include "../Material/PhysicalMaterialBase.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	m_HPBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBar"));
	m_Capture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Capture"));

	m_HPBar->SetupAttachment(GetMesh());
	m_Capture->SetupAttachment(GetMesh());

	// Camera Arm의 부모 Component로 현재 Mesh로 지정.
	m_Arm->SetupAttachment(GetMesh());

	// Camera의 부모 Component로 Arm을 지정.
	m_Camera->SetupAttachment(m_Arm);

	GetCharacterMovement()->JumpZVelocity = 600.f;

	m_AttackEnable = true;

	// Player Profile 사용
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	
	GetMesh()->SetReceivesDecals(false);
	
	SetCanBeDamaged(true);

	// UI
	static ConstructorHelpers::FClassFinder<UUserWidget>	HPBarAsset(TEXT("WidgetBlueprint'/Game/UI/UI_HPBar.UI_HPBar_C'"));
	if (HPBarAsset.Succeeded())
	{
		m_HPBar->SetWidgetClass(HPBarAsset.Class);
		m_HPBar->SetWidgetSpace(EWidgetSpace::Screen);
		m_HPBar->SetDrawSize(FVector2D(200.f, 60.f));
		m_HPBar->SetRelativeLocation(FVector(0.f, 0.f, 220.f));
		m_HPBar->SetBlendMode(EWidgetBlendMode::Transparent);
	}

	// Face
	static ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D>	FaceTargetObj(TEXT("TextureRenderTarget2D'/Game/Player/RTPlayerFace.RTPlayerFace'"));
	if (FaceTargetObj.Succeeded())
		m_FaceTarget = FaceTargetObj.Object;

	m_Capture->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList;
	m_Capture->CaptureSource = ESceneCaptureSource::SCS_SceneColorSceneDepth;
	m_Capture->TextureTarget = m_FaceTarget;
	m_Capture->SetRelativeLocation(FVector(0.f, 110.f, 125.f));
	m_Capture->SetRelativeRotation(FRotator(-15.f, -90.f, 0.f));
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// DT로 전환
	USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

	if (GameInst)
	{
		FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");

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
	}

	m_AnimInstance = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance());
	m_HPBarWidget = Cast<UHPBar>(m_HPBar->GetWidget());

	m_HPBarWidget->SetDelegate<APlayerCharacter>(this, &APlayerCharacter::NameWidgetCallback);



	// UI Test
	GameMode = Cast<ASogangUnivGameModeBase>(GetWorld()->GetAuthGameMode());
	if (IsValid(GameMode))
	{
		MainHUD = GameMode->GetMainHUD();

		if (IsValid(MainHUD))
		{
			// Main UI
			CharacterHUD = MainHUD->GetCharacterHUD();

			if (IsValid(CharacterHUD))
			{
				CharacterHUD->SetHPPercent(m_PlayerInfo.HP / (float)m_PlayerInfo.HPMax);
				CharacterHUD->SetMPPercent(m_PlayerInfo.MP / (float)m_PlayerInfo.MPMax);
				CharacterHUD->SetName(m_PlayerInfo.Name);
			}
		}
	}

	UI_HP = m_PlayerInfo.HP;
	UI_MP = m_PlayerInfo.MP;

	// Face
	m_Capture->ShowOnlyActors.Add(this);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Lerp_UI();
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("CameraZoom"), this, &APlayerCharacter::CameraZoomKey);
	PlayerInputComponent->BindAxis(TEXT("CameraLookUp_Y"), this, &APlayerCharacter::CameraLookUpYKey);
	PlayerInputComponent->BindAxis(TEXT("CameraLookUp_X"), this, &APlayerCharacter::CameraLookUpXKey);
	PlayerInputComponent->BindAxis(TEXT("CharacterLookUp"), this, &APlayerCharacter::CharacterLookUpKey);

	PlayerInputComponent->BindAxis(TEXT("MoveFront"), this, &APlayerCharacter::MoveFrontKey);
	PlayerInputComponent->BindAxis(TEXT("MoveSide"), this, &APlayerCharacter::MoveSideKey);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::JumpKey);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AttackKey);
	PlayerInputComponent->BindAction(TEXT("Skill1"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Skill1Key);
	PlayerInputComponent->BindAction(TEXT("Interaction"), EInputEvent::IE_Pressed, this, &APlayerCharacter::InteractionKey);
}

void APlayerCharacter::MoveFrontKey(float Scale)
{
	if (m_AnimInstance->GetAnimType() != EPlayerAnimType::NPC_Interaction)
	{
		AddMovementInput(GetActorForwardVector(), Scale);

		if (0.f <= Scale)
			m_AnimInstance->SetDirection(0.f);

		else
			m_AnimInstance->SetDirection(180.f);
	}
}

void APlayerCharacter::MoveSideKey(float Scale)
{
	if (m_AnimInstance->GetAnimType() != EPlayerAnimType::NPC_Interaction)
	{
		AddMovementInput(GetActorRightVector(), Scale);

		float	Direction = m_AnimInstance->GetDirection();

		if (0.f < Scale)
		{
			if (Direction == 0.f)
				m_AnimInstance->SetDirection(90.f);

			else
				m_AnimInstance->SetDirection(180.f);
		}

		else if (Scale < 0.f)
		{
			if (Direction == 180.f)
				m_AnimInstance->SetDirection(-90.f);

			else
				m_AnimInstance->SetDirection(-180.f);
		}
	}
}

void APlayerCharacter::CameraZoomKey(float Scale)
{
	m_Arm->TargetArmLength -= Scale * 20.f;

	if (m_Arm->TargetArmLength < 30.f)
		m_Arm->TargetArmLength = 30.f;

	else if (m_Arm->TargetArmLength > 500.f)
		m_Arm->TargetArmLength = 500.f;
}

void APlayerCharacter::CameraLookUpYKey(float Scale)
{
	FRotator	Rot = m_Arm->GetRelativeRotation();
	Rot.Pitch -= Scale * 70.f * GetWorld()->GetDeltaSeconds();

	if (Rot.Pitch > 88.f)
		Rot.Pitch = 88.f;

	else if (Rot.Pitch < -88.f)
		Rot.Pitch = -88.f;


	m_Arm->SetRelativeRotation(Rot);
}

void APlayerCharacter::CameraLookUpXKey(float Scale)
{
	/*FRotator	Rot = m_Arm->GetRelativeRotation();
	Rot.Yaw += Scale * 50.f * GetWorld()->GetDeltaSeconds();

	m_Arm->SetRelativeRotation(Rot);*/

	Scale *= 40.f * GetWorld()->GetDeltaSeconds();

	AddControllerYawInput(Scale);
}

void APlayerCharacter::CharacterLookUpKey(float Scale)
{
	FRotator	StartRot = m_Arm->GetRelativeRotation();
	
	if (m_AnimInstance->GetSpeed() > 0.f)
	{
		FRotator Destination;
		Destination.Yaw = 90.f;
		Destination.Pitch = -20.f;

		FRotator Result = FMath::Lerp(StartRot, Destination, 2.0f * GetWorld()->GetDeltaSeconds());
		m_Arm->SetRelativeRotation(Result);
		return;
	}	
	
	StartRot.Yaw += Scale * 75.f * GetWorld()->GetDeltaSeconds();
	m_Arm->SetRelativeRotation(StartRot);
}

void APlayerCharacter::JumpKey()
{
	if (m_AnimInstance->GetPawnOnGround())
	{
		Jump();
		m_AnimInstance->ChangeAnimType(EPlayerAnimType::Jump);
	}
}

void APlayerCharacter::AttackKey()
{
	if (m_AttackEnable)
	{
		m_AttackEnable = false;
		m_AnimInstance->SetAnimAttack(true);
		Attack();
	}
}

void APlayerCharacter::Skill1Key()
{
	Skill1();
}

void APlayerCharacter::InteractionKey()
{
	Interaction();
}

void APlayerCharacter::Attack()
{

}

void APlayerCharacter::Skill1()
{

}

void APlayerCharacter::Interaction()
{

}

void APlayerCharacter::NormalAttack()
{
	
}

void APlayerCharacter::AttackEnd()
{
	m_AttackEnable = true;
}

void APlayerCharacter::UseSkill(int32 Index)
{
	
}

float APlayerCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	if (Damage == 0.f)
		return 0.f;

	Damage = Damage - m_PlayerInfo.Armor;
	Damage = Damage < 1.f ? 1.f : Damage;

	m_PlayerInfo.HP -= Damage;

	// Enemy Die
	if (m_PlayerInfo.HP <= 0)
	{
		/*m_AnimInstance->ChangeAnimType(EEnemyAnimType::Death);

		AEnemyAIController* EnemyController = Cast<AEnemyAIController>(GetController());
		if (EnemyController)
			EnemyController->BrainComponent->StopLogic(TEXT("Dead"));*/
	}

	/* 
		HP HUD UI Tick에서 처리로 변경	
	*/

	// In Game UI
	if (IsValid(m_HPBarWidget))
	{
		m_HPBarWidget->SetHPPercent(m_PlayerInfo.HP / (float)m_PlayerInfo.HPMax);
	}

	GetWorld()->GetFirstPlayerController()->ClientPlayCameraShake(UHitCameraShake::StaticClass());

	return Damage;
}

void APlayerCharacter::NameWidgetCallback()
{
	m_HPBarWidget->SetName(m_PlayerInfo.Name);
}

void APlayerCharacter::FootStep(bool Left)
{
	// Get Socket Location
	FVector SocketLoc;
	if (Left)
		SocketLoc = GetMesh()->GetSocketLocation(TEXT("foot_r"));
	else
		SocketLoc = GetMesh()->GetSocketLocation(TEXT("foot_l"));

	// Socket Location to LineTrace Collision
	FHitResult result;
	FCollisionQueryParams	params(NAME_None, false, this);
	params.bReturnPhysicalMaterial = true;

	bool Hit = GetWorld()->LineTraceSingleByChannel(result, SocketLoc, SocketLoc + FVector(0.f, 0.f, -100.f), ECollisionChannel::ECC_GameTraceChannel6, params);

	if (Hit)
	{
		UPhysicalMaterialBase* Physics = Cast<UPhysicalMaterialBase>(result.PhysMaterial);

		if (Physics)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), Physics->GetSound(), result.ImpactPoint);
			PrintViewPort(1.f, FColor::Red, TEXT("Step Collision"));
		}
		else
		{
			PrintViewPort(1.f, FColor::Red, TEXT("Physics is Do not Find"));
		}
	}
	else
	{
		PrintViewPort(1.f, FColor::Red, TEXT("Step Not Collision"));
	}
}

void APlayerCharacter::Lerp_UI()
{
	// Lerp
	int32 ResultHP = FMath::Lerp(UI_HP, m_PlayerInfo.HP, 0.002f * GetWorld()->GetDeltaSeconds());
	int32 ResultMP = FMath::Lerp(UI_MP, m_PlayerInfo.MP, 0.002f * GetWorld()->GetDeltaSeconds());

	UI_HP = ResultHP;
	UI_MP = ResultMP;

	CharacterHUD->SetHPPercent(UI_HP / (float)m_PlayerInfo.HPMax);
	CharacterHUD->SetMPPercent(UI_MP / (float)m_PlayerInfo.MPMax);
}
