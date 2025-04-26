#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseGameParameterCookedData -FallbackName=WwiseGameParameterCookedData
#include <WwiseGameParameterCookedData.h>
#include "AkAudioType.h"
#include "AkRtpc.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkRtpc : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseGameParameterCookedData GameParameterCookedData;
    
    UAkRtpc();

};

