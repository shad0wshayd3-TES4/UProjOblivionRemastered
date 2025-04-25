#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLightComponent -FallbackName=SpotLightComponent
#include "VDetectionLightingFakeSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDetectionLightingFakeSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UVDetectionLightingFakeSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

