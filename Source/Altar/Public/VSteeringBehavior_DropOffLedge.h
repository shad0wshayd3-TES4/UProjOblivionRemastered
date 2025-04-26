#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteeringBehaviors -ObjectName=SteeringBehavior_DropOffLedge -FallbackName=SteeringBehavior_DropOffLedge
#include "SteeringBehavior_DropOffLedge.h"

#include "VSteeringBehavior_DropOffLedge.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVSteeringBehavior_DropOffLedge : public USteeringBehavior_DropOffLedge {
    GENERATED_BODY()
public:
    UVSteeringBehavior_DropOffLedge();

};

