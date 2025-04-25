#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "VAltarHapticFeedbacksBlueprintLibrary.generated.h"

class UInputDeviceProperty;

UCLASS(Blueprintable)
class UVAltarHapticFeedbacksBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarHapticFeedbacksBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveDeviceProperty(TSubclassOf<UInputDeviceProperty> DeviceProp);
    
    UFUNCTION(BlueprintCallable)
    static void OnFreezeHandleHaptics(bool bIsFreezing);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDevicePropertyActive(TSubclassOf<UInputDeviceProperty> DeviceProp);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllHaptics();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDeviceProperty(TSubclassOf<UInputDeviceProperty> DeviceProp);
    
};

