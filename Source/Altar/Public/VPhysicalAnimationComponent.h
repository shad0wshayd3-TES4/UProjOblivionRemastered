#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicalAnimationComponent -FallbackName=PhysicalAnimationComponent
#include "PhysicsEngine/PhysicalAnimationComponent.h"

#include "VPhysicalAnimationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVPhysicalAnimationComponent : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
    UVPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer);

};

