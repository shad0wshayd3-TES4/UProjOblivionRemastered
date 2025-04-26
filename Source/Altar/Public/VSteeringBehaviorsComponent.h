#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteeringBehaviors -ObjectName=SteeringBehaviorsComponent -FallbackName=SteeringBehaviorsComponent
#include "SteeringBehaviorsComponent.h"
#include "EnhancedActionKeyMapping.h"

#include "VSteeringBehaviorsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVSteeringBehaviorsComponent : public USteeringBehaviorsComponent {
    GENERATED_BODY()
public:
    UVSteeringBehaviorsComponent(const FObjectInitializer& ObjectInitializer);

};

