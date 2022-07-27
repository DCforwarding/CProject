// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FBS_GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CPROJECT5_API AFBS_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void StartPlay() override;
};
