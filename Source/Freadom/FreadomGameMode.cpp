// Copyright Epic Games, Inc. All Rights Reserved.

#include "FreadomGameMode.h"
#include "FreadomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFreadomGameMode::AFreadomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
