#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModernEffectItemData.h"
#include "VModernEffectItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernEffectItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernEffectItemData Properties;
    
public:
    UVModernEffectItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FModernEffectItemData& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernEffectItemData GetProperties() const;
    
};

