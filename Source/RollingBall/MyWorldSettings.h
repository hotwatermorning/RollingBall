// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "MyWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class ROLLINGBALL_API AMyWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Physics")
	void SetGravityZ(float value);

	void SetGravityZ_Implementation(float value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Physics")
    void TestGravityZ(float value) const;

	void TestGravityZ_Implementation(float value) const;
};
