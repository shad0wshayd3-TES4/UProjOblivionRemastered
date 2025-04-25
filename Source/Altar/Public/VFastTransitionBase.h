#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VFastTransitionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVFastTransitionBase : public UObject {
    GENERATED_BODY()
public:
    UVFastTransitionBase();

};

