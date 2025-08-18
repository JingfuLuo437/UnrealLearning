// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SProjectileBaseClass.h"
#include "SDashProjectile.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGPROJECT_API ASDashProjectile : public ASProjectileBaseClass
{
	GENERATED_BODY()

protected:
	FTimerHandle DashTimer;
public:
	ASDashProjectile();

	void Dash();

	virtual void Explode_Implementation() override;
	

	
};
