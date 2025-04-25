#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "NiKeyBasedInterpolator.h"
#include "NiColorInterpolator.generated.h"

class UNiColorData;

UCLASS(Blueprintable)
class ALTAR_API UNiColorInterpolator : public UNiKeyBasedInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiColorData* Data;
    
    UNiColorInterpolator();

};

