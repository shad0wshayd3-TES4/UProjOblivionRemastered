#pragma once
#include "CoreMinimal.h"
#include "EAlchemyFlags.generated.h"

UENUM(BlueprintType)
enum class EAlchemyFlags : uint8 {
    None = 0,
    CostOverride = 1,
    FoodItem,
};

