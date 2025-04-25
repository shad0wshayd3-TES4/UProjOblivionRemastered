#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBase -FallbackName=TriggerBase
#include "SteeringBehaviorsComponentDeactivationTrigger.generated.h"

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API ASteeringBehaviorsComponentDeactivationTrigger : public ATriggerBase {
    GENERATED_BODY()
public:
    ASteeringBehaviorsComponentDeactivationTrigger(const FObjectInitializer& ObjectInitializer);

};

