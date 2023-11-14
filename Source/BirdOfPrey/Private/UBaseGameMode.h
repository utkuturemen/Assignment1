// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABasePowerUp.h"
#include "BaseGameAgent.h"
#include "UBasePlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "UBaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class AUBaseGameMode : public AGameModeBase
{
	GENERATED_BODY()



	
public:
	

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	float UWorldScrollSpeed;

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	FVector2D UMaxRelativePlayerOffset;

	// Look Again
	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	ACameraActor* UWorldCameraActor;


	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	UDataTable* UPlayerAgentInfoTable;

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	float URespawnDelay;

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	float USpawnOffset;

	// Look Again
	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	FTimerHandle UStationarySpawnTimer;

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	FTimerHandle UShipSpawnTimer;

	// Look Again
	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	TArray <AABasePowerUp*> PowerUpList;

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	float UPickUpSpawnPercent;

	UPROPERTY(EditAnywhere,Category = "BirdOfPrey")
	bool UIsGameOverScreen;



	
	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	
	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void OnPlayerDied (AUBasePlayerController* Player);

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void OnEnemyDied (AUBasePlayerController* &Player, AUBasePlayerController* Killer);


	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void StartGame ();

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void EndGame (bool Success);

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void SpawnEnemyFrom (TArray<ABaseGameAgent*> ClassList);

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void ResetGame ();

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void RespawnPlayer ();

	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	void TrySomePowerUp (FVector Location);

	
	UFUNCTION(BlueprintCallable,Category = "BirdOfPrey")
	float GetDistanceTravelled();


	
	public:
		
	};
