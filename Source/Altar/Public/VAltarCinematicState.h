#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "VAltarCinematicState.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVAltarCinematicState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime CinematicFrameTime;
    
    FVAltarCinematicState();
};

