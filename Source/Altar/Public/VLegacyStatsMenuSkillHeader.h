#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VLegacyStatsMenuSkillHeader.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyStatsMenuSkillHeader : public UObject {
    GENERATED_BODY()
public:
    UVLegacyStatsMenuSkillHeader();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetProperties() const;
    
};

