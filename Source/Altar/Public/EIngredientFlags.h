#pragma once
#include "CoreMinimal.h"
#include "EIngredientFlags.generated.h"

UENUM(BlueprintType)
enum class EIngredientFlags : uint8 {
    None = 0,
    CostOverride = 1,
    FoodItem,
};

