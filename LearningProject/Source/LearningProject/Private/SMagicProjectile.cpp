 // Fill out your copyright notice in the Description page of Project Settings.


#include "SMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SAttributeComponent.h"

#include "GameFrameWork/ProjectileMovementComponent.h"

// Sets default values
ASMagicProjectile::ASMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("Sphere_Comp");
	//SphereComp->SetCollisionProfileName("Projectile");
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Overlap);
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASMagicProjectile::OnActorOverlap);
	RootComponent = SphereComp;


	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>("Effect_Comp");
	ParticleComp->SetupAttachment(SphereComp);
	ParticleComp->SetCollisionProfileName("Projectile");
	ParticleComp->SetCollisionResponseToAllChannels(ECR_Overlap);

	ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	ProjectileComp->InitialSpeed = 10000.0f;
	ProjectileComp->bRotationFollowsVelocity = false;
	ProjectileComp->bInitialVelocityInLocalSpace = true;
}

void ASMagicProjectile::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != GetInstigator()) {
		USAttributeComponent*AttributeComp = Cast<USAttributeComponent>( OtherActor->GetComponentByClass(USAttributeComponent::StaticClass()));
		if (AttributeComp) {
			AttributeComp->ApllyHealthChange(-20.0f);
			Destroy();
		}
	}
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

