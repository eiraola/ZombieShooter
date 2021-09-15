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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	bool bIsAiming;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float regularFOV;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float zoomedFOV;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float currentFOV;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float FOVZoomInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float hipTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float hipLookUpRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float AimTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combata)
	float AimLookUpRate;
private:
	void MoveForward(float value);
	void MoveRight(float value);
	void Aim();
	void StopAim();
	void SetAiminFOV(float DeltaTime);



	
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
	UFUNCTION(BlueprintCallable)
	bool IsAiming();
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetCamera() const { return FollowCamera; }
	void SetWeapon(AActor* weapon);
};
