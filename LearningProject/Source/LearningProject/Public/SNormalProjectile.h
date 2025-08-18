// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SProjectileBaseClass.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "SNormalProjectile.generated.h"

/**
 * 
 */
class URadialForceComponent;


UCLASS()
class LEARNINGPROJECT_API ASNormalProjectile : public ASProjectileBaseClass
{
	GENERATED_BODY()
public:
	ASNormalProjectile();
protected:
	virtual void OverlapWithOtherActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
	
	
	
};
