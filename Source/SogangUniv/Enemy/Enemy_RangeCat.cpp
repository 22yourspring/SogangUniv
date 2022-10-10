// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_RangeCat.h"
#include "../Effect/RangeCatAttack.h" 

// Sets default values
AEnemy_RangeCat::AEnemy_RangeCat()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	MeshAsset(TEXT("SkeletalMesh'/Game/Pspsps_Cat/Meshes/SM_Chibi_Cat.SM_Chibi_Cat'"));
	if (MeshAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>	AnimAsset(TEXT("AnimBlueprint'/Game/Enemy/BPEnemyRangeAnim.BPEnemyRangeAnim_C'"));
	if (AnimAsset.Succeeded())
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);

	m_EnemyInfoName = TEXT("RangeCat");
}

// Called when the game starts or when spawned
void AEnemy_RangeCat::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemy_RangeCat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy_RangeCat::NormalAttack()
{
	/*FVector ArrowLoc = GetMesh()->GetSocketLocation(TEXT("hand_l_Arrow"));
	ArrowLoc.Z += 50.f;
	FActorSpawnParameters param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ARangeCatAttack* Attack = GetWorld()->SpawnActor<ARangeCatAttack>(ARangeCatAttack::StaticClass(), ArrowLoc, GetActorRotation(), param);
	Attack->ARangeCatAttack::SetOwnerActor(this);*/
}