#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ATMBiomeInfluencer.h"
#include "ATMBiomeConstant.generated.h"

class UATMBiomePreset;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMBiomeConstant : public UObject, public IATMBiomeInfluencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UATMBiomePreset*, float> PresetWeights;
    
public:
    UATMBiomeConstant();


    // Fix for true pure virtual functions not being implemented
};

