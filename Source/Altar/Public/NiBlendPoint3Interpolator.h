#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiBlendInterpolator.h"
#include "NiBlendPoint3Interpolator.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBlendPoint3Interpolator : public UNiBlendInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UNiBlendPoint3Interpolator();

};

