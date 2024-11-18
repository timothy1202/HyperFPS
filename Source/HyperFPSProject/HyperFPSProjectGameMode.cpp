// Copyright Epic Games, Inc. All Rights Reserved.

#include "HyperFPSProjectGameMode.h"
#include "HyperFPSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHyperFPSProjectGameMode::AHyperFPSProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
