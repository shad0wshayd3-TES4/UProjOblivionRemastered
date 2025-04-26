#pragma once
#include "CoreMinimal.h"
#include "EBipedModelFlags.generated.h"

UENUM(BlueprintType)
enum class EBipedModelFlags : uint8 {
    None = 0,
    NonPlayable = 64,
    Heavy = 128,
};

