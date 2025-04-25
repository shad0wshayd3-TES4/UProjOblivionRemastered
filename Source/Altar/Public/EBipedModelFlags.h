#pragma once
#include "CoreMinimal.h"
#include "EBipedModelFlags.generated.h"

UENUM(BlueprintType)
enum class EBipedModelFlags : uint8 {
    NonPlayable = 64,
    Heavy = 128,
};

