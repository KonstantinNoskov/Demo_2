#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyMovement.generated.h"


UCLASS()

class DEMO_2_API UMyMovement : public UCharacterMovementComponent
{
	GENERATED_BODY();


	bool Safe_bWantsToSprint;

public:
	UMyMovement();

	UFUNCTION(BlueprintCallable) void SprintPressed();
	UFUNCTION(BlueprintCallable) void SprintReleased();

};

