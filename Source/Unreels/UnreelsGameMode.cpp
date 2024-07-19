// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnreelsGameMode.h"
#include "UnreelsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreelsGameMode::AUnreelsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
