#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VAIPackageExecutionOverride.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVAIPackageExecutionOverride : public UObject {
    GENERATED_BODY()
public:
    UVAIPackageExecutionOverride();

};

