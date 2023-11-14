// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseWeapon.h"

void AABaseWeapon::StartFire()
{
	
}

void AABaseWeapon::StopFire()
{
	
}

void AABaseWeapon::PlayFireEffects()
{
	
}

FTransform AABaseWeapon::GetFireEffectSpawnTransform()
{
	return {};
}

bool AABaseWeapon::HasFinishedFiring()
{
	return false;
}

bool AABaseWeapon::IsFiring()
{
	return false;
}

// Sets default values
AABaseWeapon::AABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

