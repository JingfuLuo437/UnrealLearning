// Fill out your copyright notice in the Description page of Project Settings.


#include "SNormalProjectile.h"
#include "Components/SphereComponent.h"
#include "SProjectileBaseClass.h"

ASNormalProjectile::ASNormalProjectile()
{
	
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASNormalProjectile::OverlapWithOtherActor);
	
}

void ASNormalProjectile::OverlapWithOtherActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OverlapWithOtherActor(OverlappedComponent, OtherActor,  OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
}




