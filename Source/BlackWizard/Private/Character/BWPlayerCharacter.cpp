#include "Character/BWPlayerCharacter.h"
#include "AbilitySystem/BWAbilitySystemComponent.h"
#include "AbilitySystem/BWAttributeSet.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"

ABWPlayerCharacter::ABWPlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
    AbilitySystemComponent = CreateDefaultSubobject<UBWAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    AttributeSet = CreateDefaultSubobject<UBWAttributeSet>(TEXT("AttributeSet"));
    SpriteComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SpriteComponent"));
    SpriteComponent->SetupAttachment(GetRootComponent());
    UCharacterMovementComponent* Movement = GetCharacterMovement();
    Movement->bConstrainToPlane = true;
    Movement->SetPlaneConstraintNormal(FVector(0.0, 1.0, 0.0));
    Movement->bSnapToPlaneAtStart = true;
}

UAbilitySystemComponent* ABWPlayerCharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}
