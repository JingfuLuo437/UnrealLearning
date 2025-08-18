// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SProjectileBaseClass.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "SSuctionProjectile.generated.h"

class URadialForceComponent;
/**
 * 
 */
UCLASS()
class LEARNINGPROJECT_API ASSuctionProjectile : public ASProjectileBaseClass
{
	GENERATED_BODY()
public:
	ASSuctionProjectile();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	URadialForceComponent* ForceComponent;

	


};
