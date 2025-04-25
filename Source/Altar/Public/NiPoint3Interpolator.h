#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiKeyBasedInterpolator.h"
#include "NiPoint3Interpolator.generated.h"

class UNiPosData;

UCLASS(Blueprintable)
class ALTAR_API UNiPoint3Interpolator : public UNiKeyBasedInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPosData* Data;
    
    UNiPoint3Interpolator();

};

