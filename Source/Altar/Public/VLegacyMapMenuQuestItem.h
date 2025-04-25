#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyMapMenuQuestProperties.h"
#include "VLegacyMapMenuQuestItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyMapMenuQuestItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacyMapMenuQuestItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyMapMenuQuestProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMapMenuQuestProperties GetProperties() const;
    
};

