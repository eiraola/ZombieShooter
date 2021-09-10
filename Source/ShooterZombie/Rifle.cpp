// Fill out your copyright notice in the Description page of Project Settings.
#include "Rifle.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "ShooterMain.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraComponent.h"
#include "Particles/ParticleSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
ARifle::ARifle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	CollisionSphere->SetupAttachment(GetRootComponent());
	CollisionSphere->SetSphereRadius(50.0f); 
	CollisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
}

// Called when the game starts or when spawned
void ARifle::BeginPlay()
{
	Super::BeginPlay();
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ARifle::OnSphereBeginOverlap);
	
}

// Called every frame
void ARifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ARifle::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor) {
		Mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
		Mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
		Mesh->SetSimulatePhysics(false);
		AShooterMain* player = Cast<AShooterMain>(OtherActor);
		player->SetWeapon(this);
	}
}

void ARifle::Shoot()
{
	
	const USkeletalMeshSocket* socket = Mesh->GetSocketByName("WeaponBarrel");
	if (socket) {
		
		FTransform socketTransform = socket->GetSocketTransform(Mesh);
		if(NS_Shoot){
			
			
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShootEffect, socketTransform);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NS_Shoot, socketTransform.GetLocation(), socketTransform.GetRotation().Rotator(), FVector(2.1f, 2.1f,2.1f), true, true, ENCPoolMethod::FreeInPool, true);
		}
		
		FHitResult hit;																							 
		FVector start = socket->GetSocketTransform(Mesh).GetLocation();
		FVector end = (socket->GetSocketTransform(Mesh).GetRotation().GetForwardVector() * 1000) + start;
		GetWorld()->LineTraceSingleByChannel(hit, start, end, ECollisionChannel::ECC_Visibility);
		
		if (hit.bBlockingHit) {
			//DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 1.0f);
			//DrawDebugPoint(GetWorld(), hit.ImpactPoint,120.0f,FColor::Blue, false, 1.0f);
			if(NS_Impact)
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NS_Impact, hit.ImpactPoint, hit.ImpactNormal.Rotation(), FVector(2.1f, 2.1f, 2.1f), true, true, ENCPoolMethod::FreeInPool, true);
		}
	}
}


