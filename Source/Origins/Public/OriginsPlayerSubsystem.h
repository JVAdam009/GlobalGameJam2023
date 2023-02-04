// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "Origins/Private/OriginsProjectile.h"
#include "OriginsPlayerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class ORIGINS_API UOriginsPlayerSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBallDestroyedDelegate, const AOriginsProjectile*, Ball);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBallSpawnedDelegate, const AOriginsProjectile*, Ball);

public:
	// On Ball Destroyed
	UPROPERTY(BlueprintAssignable)
		FBallDestroyedDelegate OnBallDestroyed;
	UFUNCTION(Blueprintcallable)
		void BroadcastBallDestroyed(const AOriginsProjectile* Ball) const;

	// On Ball Spawned
	UPROPERTY(BlueprintAssignable)
		FBallSpawnedDelegate OnBallSpawned;
	UFUNCTION(Blueprintcallable)
		void BroadcastBallSpawned(const AOriginsProjectile* Ball) const;
};
