#pragma once
#include "CoreMinimal.h"
#include "FurnitureEntryPoints.generated.h"

UENUM(BlueprintType)
enum class FurnitureEntryPoints : uint8 {
    None = 0,
    Front = 1,
    Behind,
    Right = 4,
    Left = 8,
    Up = 16,
};

