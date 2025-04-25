#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModernSigilStoneMenuItemProperties.h"
#include "VModernSigilStoneMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSigilStoneMenuItem : public UObject {
    GENERATED_BODY()
public:
    UVModernSigilStoneMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FModernSigilStoneMenuItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernSigilStoneMenuItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex() const;
    
};

