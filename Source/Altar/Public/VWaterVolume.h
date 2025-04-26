#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsVolume -FallbackName=PhysicsVolume
#include "GameFramework/PhysicsVolume.h"

#include "VWaterVolume.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVWaterVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    AVWaterVolume(const FObjectInitializer& ObjectInitializer);

};

