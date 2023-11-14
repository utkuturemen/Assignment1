// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseWeapon.h"
#include "BaseGameInstance.h"
#include "GameFramework/Pawn.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	UParticleSystem* DeathParticleEffect;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	USoundCue* DeathSoundCue;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	USoundCue* HitSoundCue;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	UParticleSystem* HitParticleEffect;
	
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	AABaseWeapon* Weapon;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	TSubclassOf<AABaseWeapon> DefaultWeaponType;
	
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float Health;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float Points;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	bool bCheckForOutOfBounds ;
	
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	//Look Again 
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	FText WeaponSocketName;

	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	EAttachmentRule WeaponAttachRule;
	
	UPROPERTY(BlueprintReadWrite,Category="BirdOfPrey")
	FVector TargetLocation;

	
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void ChangeWeaponType(AABaseWeapon* NewWeaponType);
	

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	FTransform GetWeaponSpawnTransform();


	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void  SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void  StartFire();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void  StopFire();

	//Input Output
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	float TakeDamage(float ActualDamage);
	
	
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	bool isAlive();
	
	
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void Died( AController* Killer);
	

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void  PlayHitEffects();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void  CleanUp();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void AimAt (FVector AimTarget);


	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void PlayDeathEffects ();


	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	void CheckForOutOfBounds ();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

