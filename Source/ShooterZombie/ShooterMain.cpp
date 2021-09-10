// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterMain.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Rifle.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
// Sets default values
AShooterMain::AShooterMain()
{
	HasWeapon = false;
	BaseTurnRate = 25;
	BlaseLookUpRate = 25;
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->bUsePawnControlRotation = true;
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraBoom->SocketOffset =  FVector(0.0f, 50.0f, 50.0f);
	FollowCamera->bUsePawnControlRotation = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	GetCharacterMovement()->AirControl = 0.02f;
	GetCharacterMovement()->JumpZVelocity = 600.0f;

}

// Called when the game starts or when spawned
void AShooterMain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooterMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterMain::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AShooterMain::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AShooterMain::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &AShooterMain::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AShooterMain::LookUpRate);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AShooterMain::FireWeapon);
	PlayerInputComponent->BindAction("Jump",IE_Pressed, this, &AShooterMain::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AShooterMain::StopJumping);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AShooterMain::Aim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AShooterMain::StopAim);

}

void AShooterMain::MoveForward(float value)
{
	if (Controller != nullptr && value != 0.0f) {
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation =  FRotator(0, Rotation.Yaw, 0);
		FRotationMatrix* rMatrix = new  FRotationMatrix(YawRotation);
		FVector direction = rMatrix->GetUnitAxis(EAxis::X) ;
		AddMovementInput( direction, value);
		
	}
}

void AShooterMain::MoveRight(float value)
{
	if (Controller != nullptr && value != 0.0f) {
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation = FRotator(0, Rotation.Yaw, 0);
		FRotationMatrix* rMatrix = new  FRotationMatrix(YawRotation);
		FVector direction = rMatrix->GetUnitAxis(EAxis::Y);
		AddMovementInput(direction, value);

	}
}

void AShooterMain::Aim()
{
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
}

void AShooterMain::StopAim()
{
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void AShooterMain::TurnAtRate(float value)
{
	AddControllerPitchInput(value * BlaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AShooterMain::LookUpRate(float value)
{
	AddControllerYawInput(value * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AShooterMain::FireWeapon()
{	
	if (!Weapon) return;
	if (shootingSound) {
		//USoundConcurrency* sconc = USoundConcurrency();
		UGameplayStatics::PlaySound2D(this, shootingSound);
		ARifle* rifle = Cast<ARifle>(Weapon);
		if (rifle) {
			rifle->Shoot();
			UAnimInstance* anim = GetMesh()->GetAnimInstance();
			if (anim && montage) {
				PlayShootAnimation();
			}
		}

	}
}

void AShooterMain::PlayShootAnimation()
{
	UAnimInstance* anim = GetMesh()->GetAnimInstance();
	if (GetCharacterMovement()->Velocity.Size() > 0.1) {
		anim->Montage_Play(montage);
		anim->Montage_JumpToSection(FName("FireHip"), montage);
	}
	else {
		anim->Montage_Play(montage);
		anim->Montage_JumpToSection(FName("Fire"), montage);
	}
}

void AShooterMain::SetWeapon(AActor* weapon)
{
	
	if (weapon == Weapon) return;
	ARifle* rifle = Cast<ARifle>(weapon);
	if (rifle) {
		HasWeapon = true;
		const USkeletalMeshSocket* RightHandSock = GetMesh()->GetSocketByName("WeaponSocket");
		RightHandSock->AttachActor(rifle, GetMesh());
		Weapon = rifle;
	}
}




