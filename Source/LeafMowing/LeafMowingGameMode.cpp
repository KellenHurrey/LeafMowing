// Copyright Epic Games, Inc. All Rights Reserved.

#include "LeafMowingGameMode.h"
#include "LeafMowingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALeafMowingGameMode::ALeafMowingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
