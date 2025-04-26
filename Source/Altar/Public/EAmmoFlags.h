#pragma once
#include "CoreMinimal.h"
#include "EAmmoFlags.generated.h"

UENUM(BlueprintType)
enum class EAmmoFlags : uint8 {
    None = 0,
    IgnoreResist = 1,
};

