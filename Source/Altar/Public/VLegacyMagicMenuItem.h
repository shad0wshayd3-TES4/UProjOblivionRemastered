#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyMagicMenuItemProperties.h"
#include "VLegacyMagicMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyMagicMenuItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacyMagicMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyMagicMenuItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMagicMenuItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryIndex() const;
    
};

