// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "SGameplayInterface.h"
#include "SNewItemChest.generated.h"
class UStaticMeshComponent;

UCLASS()
class LEARNINGPROJECT_API ASNewItemChest : public AActor,public ISGameplayInterface
{
	GENERATED_BODY()
	void Interact_Inplementation(APawn* InstigatorPawn);
	
public:	
	// Sets default values for this actor's properties
	ASNewItemChest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LidMesh;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
