#pragma once
#include "CoreMinimal.h"
#include "ELeveledObjectFlags.generated.h"

UENUM(BlueprintType)
enum class ELeveledObjectFlags : uint8 {
    None = 0,
    CalculateAllBelowLevel = 1,
    CalculateForAllInCount,
};

