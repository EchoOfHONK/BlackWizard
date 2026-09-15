#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BWCombatTypes.generated.h"

USTRUCT(BlueprintType)
struct BLACKWIZARD_API FBWDamageSpec
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseDamage = 0.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StaggerDamage = 0.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Knockback = FVector::ZeroVector;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LaunchVelocity = FVector::ZeroVector;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer DamageTags;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCritical = false;
};
