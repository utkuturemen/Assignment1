// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UBasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AUBasePlayerController : public APlayerController
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere,Category="BirdOfPrey")
	bool bDiedWhileFiring;



	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void OnPlayerDeath(AUBasePlayerController* Killer);
	
};
