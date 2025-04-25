#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VAltarSunActor.generated.h"

UCLASS(Blueprintable)
class AVAltarSunActor : public AActor {
    GENERATED_BODY()
public:
    AVAltarSunActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSunState(float AxisX, float AxisY, float AxisZ, float SunriseBegin, float SunsetEnd);
    
};

