#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAssetPlatformData.generated.h"

class UAkAssetData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAssetPlatformData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAssetData* CurrentAssetData;
    
public:
    UAkAssetPlatformData();

};

