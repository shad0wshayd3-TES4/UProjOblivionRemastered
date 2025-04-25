#pragma once
#include "CoreMinimal.h"
#include "EDoorFlags.generated.h"

UENUM(BlueprintType)
enum class EDoorFlags : uint8 {
    OblivionGate = 1,
    Automatic,
    Hidden = 4,
    MinimalUse = 8,
};

