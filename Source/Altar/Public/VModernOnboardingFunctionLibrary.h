#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VModernOnboardingFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernOnboardingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVModernOnboardingFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ValidateOnboardingSoundSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ValidateOnboardingGameplaySettings();
    
    UFUNCTION(BlueprintCallable)
    static void ValidateOnboardingBrighnessSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnboardingSettingsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEULAAccepted();
    
    UFUNCTION(BlueprintCallable)
    static void AcceptEULA();
    
};

