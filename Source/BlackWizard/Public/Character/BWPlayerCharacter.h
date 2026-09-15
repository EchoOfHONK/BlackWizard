#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "BWPlayerCharacter.generated.h"

class UBWAbilitySystemComponent;
class UBWAttributeSet;
class UPaperFlipbookComponent;

UCLASS()
class BLACKWIZARD_API ABWPlayerCharacter : public ACharacter, public IAbilitySystemInterface
{
    GENERATED_BODY()
public:
    ABWPlayerCharacter();
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Ability System") TObjectPtr<UBWAbilitySystemComponent> AbilitySystemComponent;
    UPROPERTY() TObjectPtr<UBWAttributeSet> AttributeSet;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Presentation") TObjectPtr<UPaperFlipbookComponent> SpriteComponent;
};
