#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AnimCharacterAttackStartInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnimCharacterAttackStartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult PreliminaryTargetRaycast;
    
    ALTAR_API FAnimCharacterAttackStartInfo();
};

