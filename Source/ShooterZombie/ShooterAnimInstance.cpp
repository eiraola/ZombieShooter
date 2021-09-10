// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"
#include "ShooterMain.h"
#include "GameFramework/CharacterMovementComponent.h"
void UShooterAnimInstance::UpdateAnimationProperties()
{
	
	if (Character == nullptr) {
		Character = Cast<AShooterMain>(TryGetPawnOwner());
	}
	
	if (Character) {
		FVector* velocity = new FVector(Character->GetVelocity());
		bHasWeapon = Character->HasWeapon;
		if (velocity != nullptr) {
			speed = velocity->Size();
			bIsInAir = Character->GetCharacterMovement()->IsFalling();
		}
		
	}
	//if(Character->GetCharacterMovement() != nullptr){
	//if (Character->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.0f) {
	//	bIsAccelerating = true;
	//}
	//else {
	//	bIsAccelerating = false;
	//}
	//}
	
}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	Character = Cast<AShooterMain>(TryGetPawnOwner());
	
}
