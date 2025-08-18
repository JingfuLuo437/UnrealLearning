// Fill out your copyright notice in the Description page of Project Settings.


#include "SDashProjectile.h"

ASDashProjectile::ASDashProjectile()
{
}

void ASDashProjectile::Dash()
{
	
	Explode();
}

void ASDashProjectile::Explode_Implementation()   {

	Super::ASProjectileBaseClass();

}

