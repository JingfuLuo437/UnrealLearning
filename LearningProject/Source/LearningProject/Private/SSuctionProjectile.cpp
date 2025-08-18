// Fill out your copyright notice in the Description page of Project Settings.


#include "SSuctionProjectile.h"

ASSuctionProjectile::ASSuctionProjectile()
{
	ForceComponent = CreateDefaultSubobject<URadialForceComponent>("ForceComp");
	ForceComponent->SetupAttachment(RootComponent);
}


