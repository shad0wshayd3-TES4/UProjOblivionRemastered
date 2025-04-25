#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseTriggerCookedData -FallbackName=WwiseTriggerCookedData
#include "AkAudioType.h"
#include "AkTrigger.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkTrigger : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseTriggerCookedData TriggerCookedData;
    
    UAkTrigger();

};

