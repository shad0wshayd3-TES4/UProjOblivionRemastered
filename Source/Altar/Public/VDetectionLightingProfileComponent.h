#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VDetectionLightingProfileComponent.generated.h"

class UVDetectionLightingProfile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVDetectionLightingProfileComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVDetectionLightingProfile* DetectionLightingProfile;
    
    UVDetectionLightingProfileComponent(const FObjectInitializer& ObjectInitializer);

};

