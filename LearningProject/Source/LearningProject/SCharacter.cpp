// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include"Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "SInteractionComponent.h"

#include "SMagicProjectile.h"
// Sets default values
FVector HandLocation;
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

	DrawDebugDirectionalArrow(
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
	);


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
	
	

	
	FTransform SpawnTm = FTransform(GetControlRotation(), HandLocation);
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = this;

	GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTm, SpawnParams);
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

		UE_LOG(LogTemp, Warning, TEXT("right"));
		bSide = false;

	}
	else {
		HandLocation = GetMesh()->GetSocketLocation("Muzzle_02");
		UE_LOG(LogTemp, Warning, TEXT("left"));
		bSide = true;
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
	PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ASCharacter::PrimaryInteract);


}

