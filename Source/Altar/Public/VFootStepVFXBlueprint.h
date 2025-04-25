#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EVLocomotionType.h"
#include "VVFXBlueprint.h"
#include "VFootStepVFXBlueprint.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVFootStepVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVFootStepVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(EVLocomotionType LocomotionType, bool bDoesBeginInFirstPerson, FVector Velocity);
    
};

