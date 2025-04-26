#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "Components/PointLightComponent.h"
#include "VDetectionLightingFakePointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDetectionLightingFakePointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UVDetectionLightingFakePointLightComponent(const FObjectInitializer& ObjectInitializer);

};

