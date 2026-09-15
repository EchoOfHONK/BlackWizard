#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BWAttributeSet.generated.h"

#define BW_ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class BLACKWIZARD_API UBWAttributeSet : public UAttributeSet
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData Health; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, Health)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData MaxHealth; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, MaxHealth)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData Stamina; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, Stamina)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData MaxStamina; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, MaxStamina)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData Mana; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, Mana)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData MaxMana; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, MaxMana)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData Storm; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, Storm)
    UPROPERTY(BlueprintReadOnly, Category="Attributes") FGameplayAttributeData MaxStorm; BW_ATTRIBUTE_ACCESSORS(UBWAttributeSet, MaxStorm)
};
