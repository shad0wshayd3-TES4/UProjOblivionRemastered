#pragma once
#include "CoreMinimal.h"
#include "EIngredientFlags.generated.h"

UENUM(BlueprintType)
enum class EIngredientFlags : uint8 {
    CostOverride = 1,
    FoodItem,
};

