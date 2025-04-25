#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VAltarRichPresenceBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarRichPresenceBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarRichPresenceBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateRichPresence(const FString& PresenceData);
    
};

