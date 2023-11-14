// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/Actor.h"
#include "ABaseProjectile.generated.h"

UCLASS()
class AABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseProjectile();


	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float Damage;
	
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float GroundUnitCheckDistance;
	
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	ABaseGameAgent* GroundTarget;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float DesiredZ;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	USoundBase * ImpactSound;


	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void InitialiseProjectile( FVector &Direction , float Speed);

	//Look again 
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void DealDamageTo( UActorComponent* & Damaging , float NewDamage);

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void OnHit( UPrimitiveComponent* & OverlappedComponent , UActorComponent* OtherActor);

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	bool  ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void AdjustToTarget();
	
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	bool  IsEnemyProjectile();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void AdjustToDesiredZ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
