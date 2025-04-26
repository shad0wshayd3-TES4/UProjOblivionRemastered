#pragma once
#include "CoreMinimal.h"
#include "EContainerFlags.generated.h"

UENUM(BlueprintType)
enum class EContainerFlags : uint8 {
    None = 0,
    Respawn = 2,
};

