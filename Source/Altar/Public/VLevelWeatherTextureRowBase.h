#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EVWeatherTexture.h"
#include "VLevelWeatherTextureRowBase.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVLevelWeatherTextureRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVWeatherTexture WeatherTexture;
    
    FVLevelWeatherTextureRowBase();
};

