#include "Game/BWGameMode.h"
#include "Character/BWPlayerCharacter.h"

ABWGameMode::ABWGameMode()
{
    DefaultPawnClass = ABWPlayerCharacter::StaticClass();
}
