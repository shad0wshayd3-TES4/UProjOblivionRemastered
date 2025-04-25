#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AvailableEffectData.h"
#include "VAvailableEffectItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAvailableEffectItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableEffectData Properties;
    
public:
    UVAvailableEffectItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FAvailableEffectData& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAvailableEffectData GetProperties() const;
    
};

