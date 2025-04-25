#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VAltarEntitlementBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarEntitlementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarEntitlementBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDeluxeEntitlement();
    
};

