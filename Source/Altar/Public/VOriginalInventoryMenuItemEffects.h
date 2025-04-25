#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OriginalInventoryMenuItemEffects.h"
#include "VOriginalInventoryMenuItemEffects.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOriginalInventoryMenuItemEffects : public UObject {
    GENERATED_BODY()
public:
    UVOriginalInventoryMenuItemEffects();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FOriginalInventoryMenuItemEffects& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOriginalInventoryMenuItemEffects GetProperties() const;
    
};

