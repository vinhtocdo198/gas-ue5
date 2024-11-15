// QBA Studio

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraGameplayAbility.h"
#include "AuraSummonAbility.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraSummonAbility : public UAuraGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetSpawnLocations();

	UFUNCTION(BlueprintPure, Category="Summoning")
	TSubclassOf<APawn> GetRandomMinionClass();

	UPROPERTY(EditAnywhere, Category="Summoning")
	int32 MinionNum = 5;

	UPROPERTY(EditDefaultsOnly, Category="Summoning")
	TArray<TSubclassOf<APawn>> MinionClasses;

	UPROPERTY(EditDefaultsOnly, Category="Summoning")
	float MinSpawnDistance = 50.0f;

	UPROPERTY(EditDefaultsOnly, Category="Summoning")
	float MaxSpawnDistance = 250.0f;

	UPROPERTY(EditDefaultsOnly, Category="Summoning")
	float SpawnSpread = 90.f;
};
