// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BattlespaceTurbo.h"
#include "BattlespaceTurboGameMode.h"
#include "BattlespaceTurboPawn.h"

ABattlespaceTurboGameMode::ABattlespaceTurboGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABattlespaceTurboPawn::StaticClass();
}

