// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseProjectile.h"
#include "GameFramework/Actor.h"
#include "AProjectileWeapon.generated.h"

UCLASS()
class AAProjectileWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAProjectileWeapon();

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	TSubclassOf<AABaseProjectile> ProjectileType;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	int  NumShots;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float  DesiredZ;


	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	AABaseProjectile* SpawnProjectile (FTransform SpawnTransform);

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	FTransform GetProjectileSpawnTransform (int Shot_Number);

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	bool ReadyToFire ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
