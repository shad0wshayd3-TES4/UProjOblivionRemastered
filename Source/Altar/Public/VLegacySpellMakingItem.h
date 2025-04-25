#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyEffectsItemProperties.h"
#include "VLegacySpellMakingItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacySpellMakingItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyEffectsItemProperties Properties;
    
public:
    UVLegacySpellMakingItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyEffectsItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyEffectsItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};

