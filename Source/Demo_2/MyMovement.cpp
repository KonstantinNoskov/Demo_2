// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMovement.h"

UMyMovement::UMyMovement(){}

void UMyMovement::OnMovementUpdated(float DeltaSeconds, const FVector& OldLocation, const FVector& OldVelocity)
{
	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);

	if (MovementMode = MOVE_Walking)
	{
		if (Safe_bWantsToSprint)
		{	

			MaxWalkSpeed = Sprint_MaxWalkSpeed;
		}
		else
		{	
			MaxWalkSpeed = Walk_MaxWalkSpeed;
		}
	}
}

UFUNCTION(BlueprintCallable) void UMyMovement::SprintPressed()
{
	Safe_bWantsToSprint = true;
}

UFUNCTION(BlueprintCallable) void UMyMovement::SprintReleased()
{
	Safe_bWantsToSprint = false;
}


