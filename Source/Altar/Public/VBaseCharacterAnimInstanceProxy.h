#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "Animation/AnimInstanceProxy.h"

#include "VBaseCharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FVBaseCharacterAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ALTAR_API FVBaseCharacterAnimInstanceProxy();
};

