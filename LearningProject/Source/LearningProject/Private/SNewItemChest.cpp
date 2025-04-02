// Fill out your copyright notice in the Description page of Project Settings.


#include "SNewItemChest.h"
#include "Components/StaticMeshComponent.h"
#include "SInteractionComponent.h"



// Sets default values
ASNewItemChest::ASNewItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	RootComponent = BaseMesh;
	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>("LidMesh");
	LidMesh->SetupAttachment(BaseMesh);
	//LidMesh->AddRelativeRotation(FRotator(100, 0, 0));
	//LidMesh->SetRelativeRotation(FRotator(100, 0, 0));

	

}


void ASNewItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	UE_LOG(LogTemp, Warning, TEXT("Interacting with chest lid."));
	LidMesh->AddRelativeRotation(FRotator(100, 0, 0));
}


// Called when the game starts or when spawned
void ASNewItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASNewItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

