#pragma once
#include "CoreMinimal.h"
#include "InterpBlendFlags.generated.h"

UENUM(BlueprintType)
enum class InterpBlendFlags : uint8 {
    None = 0,
    MANAGER_CONTROLLED = 1,
};

