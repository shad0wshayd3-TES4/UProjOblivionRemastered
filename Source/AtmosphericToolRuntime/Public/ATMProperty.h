#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ATMProperty.generated.h"

class UATMWrapCurve;
class UATMWrapDebugBlenderRow;

UCLASS(Blueprintable)
class UATMProperty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapCurve* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapDebugBlenderRow* DebugBlenderRow;
    
    UATMProperty();

};

