// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseShipEnemy.h"

void AABaseShipEnemy::Move()
{
	
}

// Sets default values
AABaseShipEnemy::AABaseShipEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseShipEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseShipEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseShipEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

