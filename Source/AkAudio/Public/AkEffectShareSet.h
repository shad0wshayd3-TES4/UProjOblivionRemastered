#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseLocalizedShareSetCookedData -FallbackName=WwiseLocalizedShareSetCookedData
#include "AkAudioType.h"
#include <WwiseLocalizedShareSetCookedData.h>

#include "AkEffectShareSet.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkEffectShareSet : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseLocalizedShareSetCookedData ShareSetCookedData;
    
    UAkEffectShareSet();

};

