// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestingWithPedroGameMode.h"
#include "TestingWithPedroHUD.h"
#include "TestingWithPedroCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingWithPedroGameMode::ATestingWithPedroGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingWithPedroHUD::StaticClass();
}
