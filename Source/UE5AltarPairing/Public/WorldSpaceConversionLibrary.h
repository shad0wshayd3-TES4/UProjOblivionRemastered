#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "WorldSpaceConversionLibrary.generated.h"

UCLASS(Blueprintable)
class UWorldSpaceConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldSpaceConversionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUnrealWorldToTESWorldScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTESWorldToUnrealWorldScale();
    
};

