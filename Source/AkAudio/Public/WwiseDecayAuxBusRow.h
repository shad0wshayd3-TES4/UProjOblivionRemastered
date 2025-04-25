#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "WwiseDecayAuxBusRow.generated.h"

class UAkAuxBus;

USTRUCT(BlueprintType)
struct FWwiseDecayAuxBusRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAuxBus> AuxBus;
    
    AKAUDIO_API FWwiseDecayAuxBusRow();
};

