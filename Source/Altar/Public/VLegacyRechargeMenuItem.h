#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyRechargeMenuItemProperties.h"
#include "VLegacyRechargeMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyRechargeMenuItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRechargeMenuItemProperties Properties;
    
public:
    UVLegacyRechargeMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FLegacyRechargeMenuItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRechargeMenuItemProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};

