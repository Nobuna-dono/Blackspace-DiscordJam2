// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundClass.h"
#include "SoundUtility.generated.h"

/**
 * 
 */
UCLASS(Category = "System|Sound")
class UNREALJAM_API USoundUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(Category = "System|Sound", BlueprintCallable)
		static void SetSoundClassVolume(USoundClass* soundClass, float value);

};
