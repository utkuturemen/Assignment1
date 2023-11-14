// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "APlayerShip.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "ABasePowerUp.generated.h"

UCLASS()
class AABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABasePowerUp();

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	USoundCue* PickUpSoundCue;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	UParticleSystem* PickUpParticleSystem;


	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void Apply (AAPlayerShip* PlayerShip);

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void PlayEffects();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
