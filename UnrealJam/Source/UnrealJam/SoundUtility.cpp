// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundUtility.h"

void USoundUtility::SetSoundClassVolume(USoundClass* soundClass, float value)
{
	soundClass->Properties.Volume = value;
}

