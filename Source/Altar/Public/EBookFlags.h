#pragma once
#include "CoreMinimal.h"
#include "EBookFlags.generated.h"

UENUM(BlueprintType)
enum class EBookFlags : uint8 {
    Scroll = 1,
    CantTake,
};

