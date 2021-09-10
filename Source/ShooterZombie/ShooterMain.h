// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterMain.generated.h"

UCLASS()
class SHOOTERZOMBIE_API AShooterMain : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterMain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BlaseLookUpRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	class USoundCue*  shootingSound;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	bool HasWeapon;
private:
	void MoveForward(float value);
	void MoveRight(float value);
	void Aim();
	void StopAim();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = true))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = true))
	class UCameraComponent* FollowCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapons, meta = (AllowPrivateAccess = true))
	AActor* Weapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = true))
	class UAnimMontage* montage;
	void TurnAtRate(float value);
	void LookUpRate(float value);
	void FireWeapon();
	void PlayShootAnimation();
	
public:
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetCamera() const { return FollowCamera; }
	void SetWeapon(AActor* weapon);
};
