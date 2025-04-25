#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VFastTransitionCachedExtensionLevel.generated.h"

UCLASS(Blueprintable)
class UVFastTransitionCachedExtensionLevel : public UObject {
    GENERATED_BODY()
public:
    UVFastTransitionCachedExtensionLevel();

    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

