// Fill out your copyright notice in the Description page of Project Settings.


#include "Pspsps_Cat.h"
#include "PlayerAnim.h"
#include "../Effect/NormalEffect.h"
#include "../SogangUnivGameInstance.h"
#include "Bottle.h"
#include "../UI/QuestNPCWidget.h"
#include "../UI/ShopWidget.h"
#include "../SogangUnivGameModeBase.h"
#include "../SaveSystem.h"
#include "../Network/PacketStream.h"
#include "../Network/NetworkManager.h"

// Sets default values
APspsps_Cat::APspsps_Cat()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	Pspsps_CatAsset(TEXT("SkeletalMesh'/Game/Pspsps_Cat/Meshes/SM_Chibi_Cat.SM_Chibi_Cat'"));
	if (Pspsps_CatAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(Pspsps_CatAsset.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>	Pspsps_CatAnimAsset(TEXT("AnimBlueprint'/Game/Player/BPPspsps_CatAnim.BPPspsps_CatAnim_C'"));
	if (Pspsps_CatAnimAsset.Succeeded())
		GetMesh()->SetAnimInstanceClass(Pspsps_CatAnimAsset.Class);

	static ConstructorHelpers::FObjectFinder<UAnimMontage>	Attack1Asset(TEXT("AnimMontage'/Game/Player/AMPspsps_Cat_Attack1.AMPspsps_Cat_Attack1'"));
	if (Attack1Asset.Succeeded())
		m_AttackMontageArray.Add(Attack1Asset.Object);

	static ConstructorHelpers::FObjectFinder<UAnimMontage>	Attack2Asset(TEXT("AnimMontage'/Game/Player/AMPspsps_Cat_Attack2.AMPspsps_Cat_Attack2'"));
	if (Attack2Asset.Succeeded())
		m_AttackMontageArray.Add(Attack2Asset.Object);

	static ConstructorHelpers::FObjectFinder<UAnimMontage>	Attack3Asset(TEXT("AnimMontage'/Game/Player/AMPspsps_Cat_Attack3.AMPspsps_Cat_Attack3'"));
	if (Attack3Asset.Succeeded())
		m_AttackMontageArray.Add(Attack3Asset.Object);

	static ConstructorHelpers::FObjectFinder<UAnimMontage>	Skill1Asset(TEXT("AnimMontage'/Game/Player/AMPspsps_CatSkill1.AMPspsps_CatSkill1'"));
	if (Skill1Asset.Succeeded())
		m_SkillMontageArray.Add(Skill1Asset.Object);

	static ConstructorHelpers::FClassFinder<AActor>		Skill1Class(TEXT("Blueprint'/Game/Player/Pspsps_Cat/BPPspsps_CatSkill1.BPPspsps_CatSkill1_C'"));
	if (Skill1Class.Succeeded())
		m_Skill1Class = Skill1Class.Class;

	m_AttackIndex = 0;

	GetMesh()->SetCollisionProfileName("Player");
}

// Called when the game starts or when spawned
void APspsps_Cat::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters	param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	m_Weapon = GetWorld()->SpawnActor<ABottle>(ABottle::StaticClass(), FVector(0.f, -10.f, -10.f), FRotator(FMath::RadiansToDegrees(-60.f), FMath::RadiansToDegrees(180.f), FMath::RadiansToDegrees(60.f)), param);

	m_Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("hand_r_Bottle"));
//	m_Weapon->DetachFromActor()
	m_Weapon->SetMesh(TEXT("SkeletalMesh'/Game/Player/Pspsps_Cat/Pspsps_CatSkill1Mesh_Skeletal.Pspsps_CatSkill1Mesh_Skeletal_Pspsps_CatSkill1Mesh'"));
}

// Called every frame
void APspsps_Cat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RecvQueue* Queue = NetworkManager::GetInst()->GetQueue();

	while (!Queue->Empty())
	{
		int32	Protocol = -1, Length = 0;
		uint8	Packet[PACKET_SIZE] = {};

		if (Queue->Pop(Protocol, Length, Packet))
		{
			switch ((NetworkProtocol)Protocol)
			{
			case NetworkProtocol::UserConnect:
			{
				// 여기에 들어오면 다른 유저가 접속했다는 것이다.
				// 그러므로 해당 유저를 생성해 주도록 한다.
				USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());

				if (GameInst)
				{
					FPlayerTableInfo* Info = GameInst->GetPlayerInfo("Player");

					PacketStream	stream;
					stream.SetBuffer(Packet);

					int32	uniqueKey;
					stream.Read(&uniqueKey, 4);

					Info->uniqueKey = uniqueKey;

					USaveSystem* pLoadGame = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(TEXT("Save0"), 0));

					if (pLoadGame == nullptr)
					{
						pLoadGame = NewObject<USaveSystem>();
					}
					
					pLoadGame->SetPlayerName(Info->Name);
					pLoadGame->SetUniqueKey(Info->uniqueKey);

					UGameplayStatics::SaveGameToSlot(pLoadGame, "Save0", 0);
				}
			}
			break;
			}
		}
	}
}

// Called to bind functionality to input
void APspsps_Cat::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APspsps_Cat::Attack()
{
	// 재생중이 아닐시 강제로 재생
	if (!m_AnimInstance->Montage_IsPlaying(m_AttackMontageArray[m_AttackIndex]) && m_AnimInstance->GetAnimType() != EPlayerAnimType::NPC_Interaction)
	{
		m_AnimInstance->Montage_SetPosition(m_AttackMontageArray[m_AttackIndex], 0.f);
		m_AnimInstance->Montage_Play(m_AttackMontageArray[m_AttackIndex]);
		m_AnimInstance->SetAnimAttack(true);

		m_AttackIndex = (m_AttackIndex + 1) % m_AttackMontageArray.Num();
	}
}

void APspsps_Cat::Skill1()
{
	EPlayerAnimType Test = m_AnimInstance->GetAnimType();

	// 재생중이 아닐시 강제로 재생
	if (!m_AnimInstance->Montage_IsPlaying(m_SkillMontageArray[0]))
	{
		if (m_AnimInstance->GetAnimType() != EPlayerAnimType::NPC_Interaction && m_AnimInstance->GetAnimType() != EPlayerAnimType::Jump)
		{
			if (m_AnimInstance->GetPawnOnGround())
			{
				m_AnimInstance->Montage_SetPosition(m_SkillMontageArray[0], 0.f);
				m_AnimInstance->Montage_Play(m_SkillMontageArray[0]);
			}			
		}
	}
}

void APspsps_Cat::Interaction()
{
	// 재생중이 아닐시 강제로 재생
	if (!m_AnimInstance->GetAnimAttack() && m_AnimInstance->GetAnimType() != EPlayerAnimType::Jump)
	{
		if (m_AnimInstance->GetSpeed() > 300.f)
			return;

		USogangUnivGameInstance* GameInst = Cast<USogangUnivGameInstance>(GetWorld()->GetGameInstance());
		
		PrintViewPort(1.f, FColor::Red, TEXT("APspsps_Cat::Interaction"));

		if (GameInst->GetNPCTrigger())
		{
			PrintViewPort(1.f, FColor::Red, TEXT("GameInst->GetNPCTrigger true"));
			if (m_pQuestNPC == nullptr)
			{
				PrintViewPort(1.f, FColor::Red, TEXT("m_pQuestNPC nullptr"));

				ASogangUnivGameModeBase* pGameMode = Cast<ASogangUnivGameModeBase>(GetWorld()->GetAuthGameMode());

				if (IsValid(pGameMode))
				{
					UMainHUD* pMainHUD = pGameMode->GetMainHUD();

					if (IsValid(pMainHUD))
					{
						m_pQuestNPC = pMainHUD->GetQuestNPC();
					}
					else
					{
						PrintViewPort(1.f, FColor::Red, TEXT("pMainHUD nullptr"));
					}
				}
				else
				{
					PrintViewPort(1.f, FColor::Red, TEXT("pGameMode nullptr"));
				}
			}

			if (m_pShopNPC == nullptr)
			{
				PrintViewPort(1.f, FColor::Red, TEXT("m_pShopNPC nullptr"));

				ASogangUnivGameModeBase* pGameMode = Cast<ASogangUnivGameModeBase>(GetWorld()->GetAuthGameMode());

				if (IsValid(pGameMode))
				{
					UMainHUD* pMainHUD = pGameMode->GetMainHUD();

					if (IsValid(pMainHUD))
					{
						m_pShopNPC = pMainHUD->GetShopNPC();
					}
					else
					{
						PrintViewPort(1.f, FColor::Red, TEXT("pMainHUD nullptr"));
					}
				}
				else
				{
					PrintViewPort(1.f, FColor::Red, TEXT("pGameMode nullptr"));
				}
			}

			if (GameInst->GetNPCType() == NpcType::QUEST)
			{
				PrintViewPort(1.f, FColor::Red, TEXT("GameInst->GetNPCType() == NpcType::QUEST"));

				if (m_pQuestNPC != nullptr)
				{
					m_pQuestNPC->SetRender(true);
				}
				else
				{
					PrintViewPort(1.f, FColor::Red, TEXT("m_pQuestNPC nullptr"));
				}
			}
			else if (GameInst->GetNPCType() == NpcType::SHOP)
			{
				PrintViewPort(1.f, FColor::Red, TEXT("GameInst->GetNPCType() == NpcType::SHOP"));

				if (m_pShopNPC != nullptr)
				{
					PrintViewPort(1.f, FColor::Red, TEXT("m_pShopNPC != nullptr"));

					m_pShopNPC->SetRender(true);
				}
				else
				{
					PrintViewPort(1.f, FColor::Red, TEXT("m_pShopNPC == nullptr"));
				}
			}
		}
		else
		{
			PrintViewPort(1.f, FColor::Red, TEXT("GameInst->GetNPCTrigger false"));
		}
		m_AnimInstance->SetAnimType(EPlayerAnimType::NPC_Interaction);
		m_AnimInstance->SetInteraction(true);
	}
}

void APspsps_Cat::NormalAttack()
{
	Super::NormalAttack();

	FVector PlayerLoc = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	FCollisionQueryParams		params(NAME_None, false, this);

	// 근접 공격으로 해당 타이밍에 충돌처리
	TArray<FHitResult> HitResultArray;

	bool Swepp = GetWorld()->SweepMultiByChannel(HitResultArray,
		PlayerLoc, PlayerLoc,
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel4, FCollisionShape::MakeSphere(m_PlayerInfo.AttackDistance),
		params);

	// 실제 충돌 된 Object
	TArray<FHitResult> CollisionArray;

	if (Swepp)
	{
		// 각도 계산
		for (auto& result : HitResultArray)
		{
			// 대상의 타격 지점과의 거리
			FVector Dir = result.ImpactPoint - GetActorLocation();
			Dir.Normalize();

			// Player의 방향벡터
			Forward = GetActorForwardVector();
			Forward.Normalize();

			// 내적 후 Acos으로 각도 계산
			float Dot = FVector::DotProduct(Dir, Forward);
			float Angle = FMath::Acos(Dot);

			Angle = FMath::RadiansToDegrees(Angle);

			// 콜리전 판별
			if (Angle <= m_PlayerInfo.AttackAngle)
				CollisionArray.Add(result);

			else
			{
				// 최적화를 위해서 중심 Position으로 처리. 큰 Object의 경우 Cone Collision에 컬링이 되지 않는 상황에는 LayCollision으로 처리.
			}
		}
	}


#if ENABLE_DRAW_DEBUG
	LOG(TEXT("AttackDistance Infomation : %.5f"), m_PlayerInfo.AttackDistance);

	FColor DrawColor = CollisionArray.Num() > 0 ? FColor::Red : FColor::Green;	
	FString CollisionState = CollisionArray.Num() > 0 ? TEXT("Test collision is Conflict") : TEXT("Test collision is Nonconflict");
	
	PrintViewPort(1.f, DrawColor, CollisionState);
//	DrawDebugSphere(GetWorld(), PlayerLoc, m_PlayerInfo.AttackDistance, 20, DrawColor, false, 0.3f);
	DrawDebugCone(GetWorld(), PlayerLoc, GetActorForwardVector(), m_PlayerInfo.AttackDistance, 
		FMath::DegreesToRadians(m_PlayerInfo.AttackAngle), FMath::DegreesToRadians(m_PlayerInfo.AttackAngle), 3, DrawColor, false, 0.3f);

#endif	

	for (auto& result : CollisionArray)
	{
		FActorSpawnParameters	param;
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ANormalEffect* Effect = GetWorld()->SpawnActor<ANormalEffect>(ANormalEffect::StaticClass(), result.ImpactPoint, result.ImpactNormal.Rotation(), param);
	
		// 저작권
		// Asset Loading
		Effect->SetActorScale3D(FVector(0.35f, 0.35f, 0.35f));
		// Effect->AsyncLoadParticle(TEXT("Async Particle Path::Player Hit Melee"));
		
		// 저작권
		// Sounds Loading
		// Effect->AsyncLoadSound(TEXT("Async Sound Path::Player Hit Throw"));

		// Damage
		FDamageEvent DmgEvent;
		float Damage = result.GetActor()->TakeDamage(m_PlayerInfo.Attack, DmgEvent, GetController(), this);
	}
}

void APspsps_Cat::AttackEnd()
{
	Super::AttackEnd();

	m_AttackIndex = 0;
}

void APspsps_Cat::UseSkill(int32 Index)
{
	switch (Index)
	{
	case 0:
	{
		if (m_PlayerInfo.MP < 5)
			return;

		m_PlayerInfo.MP -= 5;



		FVector ActorLocation = GetActorLocation();

		ActorLocation += GetActorForwardVector() * 100.f;

		// 저작권
		// APspsps_CatSkill1* Skill = 
		// 	GetWorld()->SpawnActor<APspsps_CatSkill1>(m_Skill1Class, ActorLocation, GetActorRotation());
	}
		break;
	default:
		break;
	}
}