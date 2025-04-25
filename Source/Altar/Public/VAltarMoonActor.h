#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMoonPhase.h"
#include "VAltarMoonActor.generated.h"

UCLASS(Blueprintable)
class AVAltarMoonActor : public AActor {
    GENERATED_BODY()
public:
    AVAltarMoonActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMoonState(float RotateRevolution, float RotateAxisAltitude, EMoonPhase InPhase, float PhaseProgress);
    
};

