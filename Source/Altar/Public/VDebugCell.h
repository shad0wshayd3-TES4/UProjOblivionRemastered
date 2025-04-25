#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessVolume -FallbackName=PostProcessVolume
#include "VDebugCell.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVDebugCell : public APostProcessVolume {
    GENERATED_BODY()
public:
    AVDebugCell(const FObjectInitializer& ObjectInitializer);

};

