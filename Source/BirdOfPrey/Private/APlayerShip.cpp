// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerShip.h"

// Sets default values
AAPlayerShip::AAPlayerShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


FVector AAPlayerShip::GetShipConstantVelocity(float& Speed)
{
	return {};
}

void AAPlayerShip::ClampToCameraBounds()
{
	
}

float AAPlayerShip::GetShipAxisAdjustment(float Max, float Dist)
{
	return 0;
}

FVector AAPlayerShip::CalcOutofBoundsAdjustment()
{
	return {};
}

AUBasePlayerController* AAPlayerShip::GetPlayerAgentInfo()
{
	return {};
}

void AAPlayerShip::ShouldSpawnAIController()
{
	
}

void AAPlayerShip::UpdateHoverPitch()
{
	
}

bool AAPlayerShip::HasDiedRecently()
{
	return false;
}

// Called when the game starts or when spawned
void AAPlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

