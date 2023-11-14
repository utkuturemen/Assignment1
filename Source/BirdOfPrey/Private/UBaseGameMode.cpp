// Fill out your copyright notice in the Description page of Project Settings.


#include "UBaseGameMode.h"


FVector AUBaseGameMode::GetWorldScrollVelocity()
{
	return FVector((0, 0, 0));
}

ACameraActor* AUBaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void AUBaseGameMode::OnPlayerDied(AUBasePlayerController* Player)
{
	
}

void AUBaseGameMode::OnEnemyDied(AUBasePlayerController*& Player, AUBasePlayerController* Killer)
{
	
}




void AUBaseGameMode::StartGame()
{

	
}

void AUBaseGameMode::EndGame(bool Success)
{
	
}

void AUBaseGameMode::SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList)
{
	
}




void AUBaseGameMode::ResetGame()
{

	
}

void AUBaseGameMode::RespawnPlayer()
{
	
}

void AUBaseGameMode::TrySomePowerUp(FVector Location)
{

	
}

float AUBaseGameMode::GetDistanceTravelled()
{
	return 0;
}


