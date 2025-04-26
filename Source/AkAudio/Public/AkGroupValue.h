#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseGroupValueCookedData -FallbackName=WwiseGroupValueCookedData
#include "AkAudioType.h"
#include <WwiseGroupValueCookedData.h>

#include "AkGroupValue.generated.h"

UCLASS(Abstract, Blueprintable)
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseGroupValueCookedData GroupValueCookedData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GroupShortId;
    
    UAkGroupValue();

};

