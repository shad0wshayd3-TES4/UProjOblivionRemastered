#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AkAcousticTextureSetComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkAcousticTextureSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkAcousticTextureSetComponent(const FObjectInitializer& ObjectInitializer);

};

