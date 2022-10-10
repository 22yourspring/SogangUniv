// Fill out your copyright notice in the Description page of Project Settings.


#include "Bottle.h"

// Sets default values
ABottle::ABottle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));

	SetRootComponent(m_Mesh);
}

void ABottle::SetMesh(const FString& Path)
{
	USkeletalMesh* Mesh = LoadObject<USkeletalMesh>(nullptr, *Path);

	m_Mesh->SetSkeletalMesh(Mesh);
}

// Called when the game starts or when spawned
void ABottle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABottle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

