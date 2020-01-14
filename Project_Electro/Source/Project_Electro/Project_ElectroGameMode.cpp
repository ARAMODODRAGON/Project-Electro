// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project_ElectroGameMode.h"
#include "Project_ElectroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_ElectroGameMode::AProject_ElectroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
