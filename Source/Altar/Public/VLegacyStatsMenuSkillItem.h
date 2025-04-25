#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyStatsMenuSkillItemProperties.h"
#include "LegacyStatsMenuSkillItemUpdatableProperties.h"
#include "VLegacyStatsMenuSkillItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyStatsMenuSkillItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacyStatsMenuSkillItem();

    UFUNCTION(BlueprintCallable)
    void UpdateProperties(const FLegacyStatsMenuSkillItemUpdatableProperties& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyStatsMenuSkillItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuSkillItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};

