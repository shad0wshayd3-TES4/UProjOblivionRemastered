#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "VBlendSpaceSpeedsUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVBlendSpaceSpeedsUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SlowestAnimSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FastestAnimSpeeds;
    
    UVBlendSpaceSpeedsUserData();

};

