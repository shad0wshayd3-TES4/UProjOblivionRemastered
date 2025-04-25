#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "AnimationBlendUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UAnimationBlendUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendFrame;
    
    UAnimationBlendUserData();

};

