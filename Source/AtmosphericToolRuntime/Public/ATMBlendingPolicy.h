#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ATMBlendingPolicy.generated.h"

UCLASS(Blueprintable)
class UATMBlendingPolicy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ColorBlendingRGB;
    
    UATMBlendingPolicy();

};

