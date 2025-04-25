#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
#include "MoveRequestDestinationData.generated.h"

class AAIController;

USTRUCT(BlueprintType)
struct STEERINGBEHAVIORS_API FMoveRequestDestinationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRequestID MoveRequestId;
    
    FMoveRequestDestinationData();
};

