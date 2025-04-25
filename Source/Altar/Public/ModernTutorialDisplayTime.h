#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ModernTutorialDisplayTime.generated.h"

USTRUCT(BlueprintType)
struct FModernTutorialDisplayTime : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ALTAR_API FModernTutorialDisplayTime();
};

