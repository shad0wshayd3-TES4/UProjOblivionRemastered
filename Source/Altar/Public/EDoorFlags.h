#pragma once
#include "CoreMinimal.h"
#include "EDoorFlags.generated.h"

UENUM(BlueprintType)
enum class EDoorFlags : uint8 {
    None = 0,
    OblivionGate = 1,
    Automatic,
    Hidden = 4,
    MinimalUse = 8,
};

