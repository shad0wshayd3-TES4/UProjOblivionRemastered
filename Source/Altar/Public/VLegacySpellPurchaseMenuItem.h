#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacySpellPurchaseMenuItemProperties.h"
#include "VLegacySpellPurchaseMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacySpellPurchaseMenuItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacySpellPurchaseMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacySpellPurchaseMenuItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacySpellPurchaseMenuItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListId() const;
    
};

