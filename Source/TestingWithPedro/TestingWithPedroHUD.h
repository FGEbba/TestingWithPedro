// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TestingWithPedroHUD.generated.h"

UCLASS()
class ATestingWithPedroHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestingWithPedroHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

