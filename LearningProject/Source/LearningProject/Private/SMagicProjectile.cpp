 // Fill out your copyright notice in the Description page of Project Settings.


#include "SMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

#include "GameFrameWork/ProjectileMovementComponent.h"

// Sets default values
ASMagicProjectile::ASMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("Sphere_Comp");
	RootComponent = SphereComp;


	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>("Effect_Comp");
	ParticleComp->SetupAttachment(SphereComp);
	ParticleComp->SetCollisionProfileName("Projectile");

	ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	ProjectileComp->InitialSpeed = 1000.0f;
	ProjectileComp->bRotationFollowsVelocity = true;
	ProjectileComp->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void ASMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

