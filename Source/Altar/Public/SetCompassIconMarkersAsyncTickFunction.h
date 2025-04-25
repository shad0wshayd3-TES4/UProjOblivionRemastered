#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SetCompassIconMarkersAsyncTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSetCompassIconMarkersAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ALTAR_API FSetCompassIconMarkersAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSetCompassIconMarkersAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FSetCompassIconMarkersAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

