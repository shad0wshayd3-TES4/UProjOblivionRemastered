#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyMagicMenuHeaderProperties.h"
#include "VLegacyMagicMenuHeader.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyMagicMenuHeader : public UObject {
    GENERATED_BODY()
public:
    UVLegacyMagicMenuHeader();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyMagicMenuHeaderProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMagicMenuHeaderProperties GetProperties() const;
    
};

