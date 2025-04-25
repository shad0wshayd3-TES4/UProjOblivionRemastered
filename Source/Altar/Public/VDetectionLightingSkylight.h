#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VDetectionLightingSkylight.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ALTAR_API AVDetectionLightingSkylight : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkylightIntensityCurve;
    
public:
    AVDetectionLightingSkylight(const FObjectInitializer& ObjectInitializer);

};

