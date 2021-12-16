// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWorldSettings.h"
#include "Engine/Engine.h"

void AMyWorldSettings::SetGravityZ_Implementation(float value)
{
    GlobalGravityZ = value;
}

void AMyWorldSettings::TestGravityZ_Implementation(float value) const
{
    GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::White, FString::Printf(TEXT("Gravity Factor Test: %f"), value), true);
}