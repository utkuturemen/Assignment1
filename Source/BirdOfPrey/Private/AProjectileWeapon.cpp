// Fill out your copyright notice in the Description page of Project Settings.


#include "AProjectileWeapon.h"

// Sets default values
AAProjectileWeapon::AAProjectileWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}





AABaseProjectile* AAProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AAProjectileWeapon::GetProjectileSpawnTransform(int Shot_Number)
{
	return {};
}

bool AAProjectileWeapon::ReadyToFire()
{
	return false;
}

// Called when the game starts or when spawned
void AAProjectileWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

