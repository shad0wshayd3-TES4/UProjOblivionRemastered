#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SetCompassIconMarkersGameThreadTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSetCompassIconMarkersGameThreadTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ALTAR_API FSetCompassIconMarkersGameThreadTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSetCompassIconMarkersGameThreadTickFunction> : public TStructOpsTypeTraitsBase2<FSetCompassIconMarkersGameThreadTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

