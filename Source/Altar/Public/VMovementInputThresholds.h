#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"

#include "VMovementInputThresholds.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVMovementInputThresholds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FGameplayTag> MaxGaitForThresholds;
    
    FVMovementInputThresholds();
};

