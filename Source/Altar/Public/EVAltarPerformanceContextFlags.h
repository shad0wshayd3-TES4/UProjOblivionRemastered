#pragma once
#include "CoreMinimal.h"
#include "EVAltarPerformanceContextFlags.generated.h"

UENUM(BlueprintType)
enum class EVAltarPerformanceContextFlags : uint8 {
    None = 0,
    Startup = 1,
    LoadingScreen,
    PlayerLoadGame = 4,
    PlayerSaveGame = 8,
    UiMenuVisiblePaused = 16,
};

