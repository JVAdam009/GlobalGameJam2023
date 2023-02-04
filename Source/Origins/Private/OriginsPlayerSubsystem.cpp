// Fill out your copyright notice in the Description page of Project Settings.


#include "OriginsPlayerSubsystem.h"

void UOriginsPlayerSubsystem::BroadcastBallDestroyed(const AOriginsProjectile* Ball) const
{
	OnBallDestroyed.Broadcast(Ball);
}

void UOriginsPlayerSubsystem::BroadcastBallSpawned(const AOriginsProjectile* Ball) const
{
	OnBallSpawned.Broadcast(Ball);
}
