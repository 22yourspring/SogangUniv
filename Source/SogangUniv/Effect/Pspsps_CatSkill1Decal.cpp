// Fill out your copyright notice in the Description page of Project Settings.


#include "Pspsps_CatSkill1Decal.h"


// Sets default values
APspsps_CatSkill1Decal::APspsps_CatSkill1Decal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UMaterial>		DecalMtrlAsset(TEXT("Material'/Game/Player/Pspsps_Cat/MT_Pspsps_CatSkill2.MT_Pspsps_CatSkill2'"));

	if (DecalMtrlAsset.Succeeded())
		m_Decal->SetDecalMaterial(DecalMtrlAsset.Object);

	m_Decal->SetWorldScale3D(FVector(0.5f, 0.15f, 0.15f));
}

// Called when the game starts or when spawned
void APspsps_CatSkill1Decal::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(180.f);
}

// Called every frame
void APspsps_CatSkill1Decal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

