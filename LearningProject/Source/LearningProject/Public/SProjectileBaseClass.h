// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SAttributeComponent.h"
#include "SProjectileBaseClass.generated.h"

class USphereComponent;
class UParticleSystemComponent;
class UProjectileMovementComponent;
class USAttributeComponent;

UCLASS(ABSTRACT)
class LEARNINGPROJECT_API ASProjectileBaseClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASProjectileBaseClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UProjectileMovementComponent* ProjectileMovementComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UParticleSystemComponent* ParticleComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USAttributeComponent* AttributeComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* ImpactVFX;
	
	UFUNCTION()
	virtual void OverlapWithOtherActor( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) ;

	

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Explode();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
