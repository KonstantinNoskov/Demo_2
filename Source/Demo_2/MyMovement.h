// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyMovement.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_2_API UMyMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()

	bool Safe_bWantsToSprint;

	UPROPERTY(EditDefaultsOnly) float Sprint_MaxWalkSpeed;
	UPROPERTY(EditDefaultsOnly) float Walk_MaxWalkSpeed;

public:
	UMyMovement();

protected:
	virtual void OnMovementUpdated(float DeltaSeconds, const FVector& OldLocation, const FVector& OldVelocity) override;

public:

	UFUNCTION(BlueprintCallable) void SprintPressed();
	UFUNCTION(BlueprintCallable) void SprintReleased();

};
