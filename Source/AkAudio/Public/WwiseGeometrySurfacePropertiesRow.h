#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "WwiseGeometrySurfacePropertiesRow.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FWwiseGeometrySurfacePropertiesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmissionLoss;
    
    AKAUDIO_API FWwiseGeometrySurfacePropertiesRow();
};

