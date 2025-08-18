// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectileBaseClass.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SAttributeComponent.h"
#include "Kismet/GameplayStatics.h"




// Sets default values
ASProjectileBaseClass::ASProjectileBaseClass()
{
	PrimaryActorTick.bCanEverTick = true;

    SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SphereComp->SetCollisionResponseToAllChannels(ECR_Overlap);
    SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASProjectileBaseClass::OverlapWithOtherActor);
    RootComponent = SphereComp;

    ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
    
    ProjectileMovementComp->InitialSpeed = 10000.0f;
    ProjectileMovementComp->bRotationFollowsVelocity = true;
    ProjectileMovementComp->bInitialVelocityInLocalSpace = true;

    ImpactVFX = CreateDefaultSubobject<UParticleSystem>(TEXT("ImpactVFX"));
    //ImpactVFX->SetupAttachment(RootComponent);

    ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    ParticleComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASProjectileBaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASProjectileBaseClass::OverlapWithOtherActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != GetInstigator()) {
        USAttributeComponent* AttributeComp = Cast<USAttributeComponent>(OtherActor->GetComponentByClass(USAttributeComponent::StaticClass()));
        if (AttributeComp) {
            AttributeComp->ApllyHealthChange(-20);
        }
    }
}



void ASProjectileBaseClass::Explode_Implementation() 
{
    if (ensure(!IsPendingKillPending()))
    {
        UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());
        Destroy();
    }
}

// Called every frame
void ASProjectileBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

