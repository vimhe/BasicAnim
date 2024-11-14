// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimProjectGameMode.h"
#include "AnimProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimProjectGameMode::AAnimProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
