#pragma once
#include "CoreMinimal.h"
#include "EFurnitureFlags.generated.h"

UENUM(BlueprintType)
enum class EFurnitureFlags : uint8 {
    None = 0,
    CanSit = 1,
    CanSleep,
};

