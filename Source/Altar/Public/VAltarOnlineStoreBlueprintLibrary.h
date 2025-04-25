#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VAltarOnlineStoreBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarOnlineStoreBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarOnlineStoreBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void OpenStoreForId(const FString& ProductId);
    
    UFUNCTION(BlueprintCallable)
    static void OpenStoreDeluxe();
    
    UFUNCTION(BlueprintCallable)
    static void OpenContentChangePopup();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDeluxeStoreId();
    
};

