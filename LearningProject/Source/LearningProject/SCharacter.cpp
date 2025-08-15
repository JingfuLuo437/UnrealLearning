// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include"Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "SInteractionComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "SAttributeComponent.h"

#include "SMagicProjectile.h"
// Sets default values
FVector HandLocation;
class URadialForceComponent;
bool bSide;
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("Spring");
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	

	CameraComp = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComp->SetupAttachment(SpringArmComp);

	InteractionComp = CreateDefaultSubobject<USInteractionComponent>("InteractionComp");

	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationYaw = false;

	AttributeComp = CreateDefaultSubobject<USAttributeComponent>("AttributeComp");

}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASCharacter::Moveforward(float Value)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0;
	ControlRot.Roll = 0;
	AddMovementInput(ControlRot.Vector(), Value);
}

void ASCharacter::MoveRight(float Value)
{
	FRotator ControlRot = GetControlRotation();
	
	ControlRot.Roll = 0;
	FVector RightVector = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);
	AddMovementInput(RightVector, Value);
}

void ASCharacter::PrimaryAttack()
{
	Judge();
	if (bSide) {
		PlayAnimMontage(AttackAnim);
	}
	else {
		PlayAnimMontage(AttackAnim_L);
	}
	


	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &ASCharacter::PrimaryAttack_TimeElapsed, 0.2f);
	//GetWorldTimerManager().ClearTimer(TimerHandle_PrimaryAttack);
	
}

void ASCharacter::SecondaryAttack()
{
	Judge();
	if (bSide) {
		PlayAnimMontage(AttackAnim);
	}
	else {
		PlayAnimMontage(AttackAnim_L);
	}



	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &ASCharacter::Secondary_TimeElapsed, 0.2f);
}

void ASCharacter::Secondary_TimeElapsed()
{
	Judge();








	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	FHitResult Hit;
	FVector Start = CameraComp->GetComponentLocation();
	FVector End = CameraComp->GetComponentLocation() + CameraComp->GetForwardVector() * 100000.0f;



	bool bResult = GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, ObjectQueryParams);


	FVector Dirction = (End - HandLocation).GetSafeNormal();
	FVector Dirction1 = (Hit.Location - HandLocation).GetSafeNormal();
	FRotator  Rot;
	if (bResult) {
		Rot = Dirction1.Rotation();

	}
	else {
		Rot = Dirction.Rotation();
	}
	//UE_LOG(LogTemp, Warning, TEXT("the hit position is %s "), *Hit.Location.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("the start pos is %s"), *Start.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("the end pos is %s "), *End.ToString());



	FTransform SpawnTm = FTransform(Rot, HandLocation);
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = this;
	SpawnParams.Owner = this;
	
	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(SuctionProjectileClass, SpawnTm, SpawnParams);
	UE_LOG(LogTemp, Warning, TEXT("owner is %s"), *SpawnedActor->Owner->GetName());
	/*//URadialForceComponent* ForceComp;
	TArray<URadialForceComponent*> ForceComponents;
	SpawnedActor->GetComponents<URadialForceComponent>(ForceComponents);
	SpawnedActor->SetOwner(this);

	for (URadialForceComponent* ForceComp : ForceComponents)
	{
		// 操作ForceComponent，例如设置参数
		//ForceComp->owner
		//ForceComp->bIgnoreOwningActor = true;
		UE_LOG(LogTemp, Warning, TEXT("the owners %s "), *ForceComp->GetOwner()->GetName());
	}
	*/
	//UPrimitiveComponent* CollisionComp = Cast<UPrimitiveComponent>(SpawnedActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
	 //UE_LOG(LogTemp, Warning, TEXT("the end pos is %s "), *SpawnParams.Instigator->GetName());
	//CollisionComp->IgnoreActorWhenMoving(this, true);


}





// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector ActorForward = GetActorForwardVector();
	FVector CameraForward = CameraComp->GetForwardVector();
	CameraForward.Z = 0;
	CameraForward = CameraForward.GetSafeNormal();


	FVector ActorLocation = GetActorLocation();
	FVector CameraLocation = CameraComp->GetComponentLocation() - 10.0f;
	float ArrowSize = 100.0f;
	FColor ActorColor = FColor::Red;
	FColor CameraColor = FColor::Blue;

	/*DrawDebugDirectionalArrow(
		GetWorld(),
		ActorLocation,
		ActorLocation + ActorForward * ArrowSize,
		50.0f, // 箭头头部大小
		ActorColor,
		false, // 不持续画，自动消失
		-1.0f, // 不持续时间
		0,
		2.0f // 箭头线宽
	);
	DrawDebugDirectionalArrow(
		GetWorld(),
		CameraLocation,
		CameraLocation + CameraForward * ArrowSize,
		50.0f,
		CameraColor,
		false,
		-1.0f,
		0,
		2.0f
	);*/


}



void ASCharacter::PrimaryInteract()
{
	
	if(InteractionComp){
		//Jump();
	InteractionComp->PrimaryInteract();
	UE_LOG(LogTemp, Warning, TEXT("InteractionComp is valid."));
	}
}

void ASCharacter::PrimaryAttack_TimeElapsed()
{
	
	Judge();
	
	

	
	
	


	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	 FHitResult Hit;
	FVector Start = CameraComp->GetComponentLocation();
	FVector End = CameraComp->GetComponentLocation() + CameraComp->GetForwardVector() * 100000.0f;
	
	
	
	bool bResult = GetWorld()->LineTraceSingleByObjectType(Hit,Start,End,ObjectQueryParams);

	
	FVector Dirction = (End - HandLocation).GetSafeNormal();
	FVector Dirction1 = (Hit.Location - HandLocation).GetSafeNormal();
	FRotator  Rot;
	if (bResult) {
		Rot = Dirction1.Rotation();
	
	}
	else {
		Rot = Dirction.Rotation();
	}
	//UE_LOG(LogTemp, Warning, TEXT("the hit position is %s "), *Hit.Location.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("the start pos is %s"), *Start.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("the end pos is %s "), *End.ToString());

	

	FTransform SpawnTm = FTransform(Rot, HandLocation);
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = this;
	//SpawnParams.Owner = this;
	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTm, SpawnParams);
	
	UPrimitiveComponent* CollisionComp = Cast<UPrimitiveComponent>(SpawnedActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
	 //UE_LOG(LogTemp, Warning, TEXT("the end pos is %s "), *SpawnParams.Instigator->GetName());
	CollisionComp->IgnoreActorWhenMoving(this, true);
	


}

void ASCharacter::Judge()

{
	FVector CharacterForward = GetActorForwardVector().GetSafeNormal();
	CharacterForward.Z = 0;
	FVector CamearForward = CameraComp->GetForwardVector().GetSafeNormal();
	CamearForward.Z = 0;

	float CrossZ = FVector::CrossProduct(CamearForward, CharacterForward).Z;

	if (CrossZ >= 0) {
		HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");

		//UE_LOG(LogTemp, Warning, TEXT("right"));
		bSide = true;

	}
	else {
		HandLocation = GetMesh()->GetSocketLocation("Muzzle_02");
		//UE_LOG(LogTemp, Warning, TEXT("left"));
		bSide = false;
	}
}


// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::Moveforward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASCharacter::Jump);

	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &ASCharacter::PrimaryAttack);
	PlayerInputComponent->BindAction("SecondaryAttack", IE_Pressed, this, &ASCharacter::SecondaryAttack);
	PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ASCharacter::PrimaryInteract);


}

