#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "AkAcousticTextureParams.generated.h"

USTRUCT(BlueprintType)
struct FAkAcousticTextureParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 AbsorptionValues;
    
    AKAUDIO_API FAkAcousticTextureParams();
};

