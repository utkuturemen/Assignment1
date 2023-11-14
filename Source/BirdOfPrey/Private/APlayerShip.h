// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseWeapon.h"
#include "BaseGameInstance.h"
#include "UBasePlayerController.h"
#include "GameFramework/Pawn.h"
#include "APlayerShip.generated.h"

UCLASS()
class AAPlayerShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPlayerShip();

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float InvulnerabilityTime;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	AUBasePlayerController* BasePlayerController;

	//InputOutput
	UFUNCTION(BlueprintCallable,Category="BirdOfPRey")
	FVector GetShipConstantVelocity(float& Speed );

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void ClampToCameraBounds();


	//Input Output
	UFUNCTION(BlueprintCallable,Category="BirdOfPRey")
	float GetShipAxisAdjustment(float Max, float Dist );

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	AUBasePlayerController* GetPlayerAgentInfo();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	bool HasDiedRecently();
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
