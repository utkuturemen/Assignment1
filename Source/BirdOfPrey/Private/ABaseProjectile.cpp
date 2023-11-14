// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseProjectile.h"

// Sets default values
AABaseProjectile::AABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AABaseProjectile::InitialiseProjectile(FVector& Direction, float Speed)
{
	
}

void AABaseProjectile::DealDamageTo(UActorComponent*& Damaging, float NewDamage)
{
	
}

void AABaseProjectile::OnHit(UPrimitiveComponent*& OverlappedComponent, UActorComponent* OtherActor)
{
	
}


ECollisionChannel AABaseProjectile::GetInstigatorCollisionChannel()
{
	return {};
}

void AABaseProjectile::CheckForGroundUnitTarget()
{
	
}

bool AABaseProjectile::ShouldCheckForGroundTarget()
{
	return false;
}

void AABaseProjectile::AdjustToTarget()
{
	
}

bool AABaseProjectile::IsEnemyProjectile()
{
	return false;
}

void AABaseProjectile::AdjustToDesiredZ()
{
	
}

// Called when the game starts or when spawned
void AABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

