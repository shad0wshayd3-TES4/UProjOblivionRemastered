#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "VAltarRebind.generated.h"

USTRUCT(BlueprintType)
struct FVAltarRebind {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> Slots;
    
    ALTAR_API FVAltarRebind();
};

