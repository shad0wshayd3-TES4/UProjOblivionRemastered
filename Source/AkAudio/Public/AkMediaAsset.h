#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkMediaAssetData*> MediaAssetDataPerPlatform;
    
public:
    UAkMediaAsset();

};

