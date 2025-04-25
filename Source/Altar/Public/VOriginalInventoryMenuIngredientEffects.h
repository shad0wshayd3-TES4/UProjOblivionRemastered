#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OriginalInventoryMenuIngredientEffects.h"
#include "VOriginalInventoryMenuIngredientEffects.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOriginalInventoryMenuIngredientEffects : public UObject {
    GENERATED_BODY()
public:
    UVOriginalInventoryMenuIngredientEffects();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FOriginalInventoryMenuIngredientEffects& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOriginalInventoryMenuIngredientEffects GetProperties() const;
    
};

