#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VAltarAIBlackboard.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarAIBlackboard : public UObject {
    GENERATED_BODY()
public:
    UVAltarAIBlackboard();

    UFUNCTION(BlueprintCallable)
    void SetScalarValue(FGameplayTag Tag, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ReadScalarValue(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValue(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearValue(FGameplayTag Tag);
    
};

