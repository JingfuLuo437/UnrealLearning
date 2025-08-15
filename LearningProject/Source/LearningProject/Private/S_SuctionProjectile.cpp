// Fill out your copyright notice in the Description page of Project Settings.


#include "S_SuctionProjectile.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFrameWork/ProjectileMovementComponent.h"
// Sets default values
AS_SuctionProjectile::AS_SuctionProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComp =CreateDefaultSubobject<USphereComponent>("SphereComp");
	RootComponent = SphereComp;

	
	ForceComp = CreateDefaultSubobject<URadialForceComponent>("RadialForceComp");
	ForceComp->SetupAttachment(RootComponent);
	//ForceComp->ForceStrength = -1000.0f;
	//ForceComp->Radius = 1000.0f;
	ForceComp->bIgnoreOwningActor = true;
	//AActor Onwer = ForceComp->instigator
	
	
	

	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>("Effect_Comp");
	ParticleComp->SetupAttachment(RootComponent);


	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComp");
	ProjectileMovementComp->InitialSpeed = 10000.0f;
	ProjectileMovementComp->bRotationFollowsVelocity = false;
	ProjectileMovementComp->bInitialVelocityInLocalSpace = true;
	

}

// Called when the game starts or when spawned
void AS_SuctionProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AS_SuctionProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*TArray<AActor*> OverlappingActors;
	for (AActor* Actor : OverlappingActors) {
		if(Actor != )
	
	
	}*/

}

