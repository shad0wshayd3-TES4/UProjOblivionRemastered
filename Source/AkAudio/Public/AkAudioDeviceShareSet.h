#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseAudioDeviceShareSetCookedData -FallbackName=WwiseAudioDeviceShareSetCookedData
#include "AkAudioType.h"
#include "AkAudioDeviceShareSet.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioDeviceShareSet : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseAudioDeviceShareSetCookedData AudioDeviceShareSetCookedData;
    
    UAkAudioDeviceShareSet();

};

