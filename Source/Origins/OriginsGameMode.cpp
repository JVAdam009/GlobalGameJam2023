// Copyright Epic Games, Inc. All Rights Reserved.

#include "OriginsGameMode.h"
#include "OriginsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOriginsGameMode::AOriginsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
