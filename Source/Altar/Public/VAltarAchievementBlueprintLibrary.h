#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EVAltarAchievement.h"
#include "VAltarAchievementBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UVAltarAchievementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarAchievementBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UndoAchievement(EVAltarAchievement Achievement);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerAchievement(EVAltarAchievement Achievement);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAchievements();
    
};

