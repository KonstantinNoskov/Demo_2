// Copyright Epic Games, Inc. All Rights Reserved.

#include "Demo_2GameMode.h"
#include "Demo_2Character.h"
#include "UObject/ConstructorHelpers.h"

ADemo_2GameMode::ADemo_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
