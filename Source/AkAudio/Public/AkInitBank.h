#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseInitBankCookedData -FallbackName=WwiseInitBankCookedData
#include <WwiseInitBankCookedData.h>

#include "AkAudioType.h"
#include "AkInitBank.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkInitBank : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseInitBankCookedData InitBankCookedData;
    
    UAkInitBank();

};

