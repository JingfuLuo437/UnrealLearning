// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("Barrel");
	ForceComp = CreateDefaultSubobject<URadialForceComponent>("RadialForce");
	RootComponent = MeshComp;
	ForceComp->SetupAttachment(MeshComp);
	ForceComp->ForceStrength = 1000;
	//ForceComp->Radius = 10000;
	ForceComp->bImpulseVelChange = true;
	ForceComp->bIgnoreOwningActor = false;
}

// Called when the game starts or when spawned
void ASExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();

	MeshComp->OnComponentHit.AddDynamic(this, &ASExplosiveBarrel::OnHit);
	
}

void ASExplosiveBarrel::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	
	if (OtherActor && OtherActor->IsA(ProjectileClass)) // 检查类型
	{
		Explode(); // 只在碰撞是 AProjectile 时触发
		UE_LOG(LogTemp, Warning, TEXT("Barrel Hit by: %s"), *OtherActor->GetName());
	}
	
}

void ASExplosiveBarrel::Explode()
{
	ForceComp->FireImpulse();
	
}

// Called every frame
void ASExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASExplosiveBarrel::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

