#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAvoidanceNavigationPathPointType.h"
#include "AdjustedPathPoint.generated.h"

USTRUCT(BlueprintType)
struct FAdjustedPathPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NextPathPointDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidanceNavigationPathPointType PathPointType;
    
    STEERINGBEHAVIORS_API FAdjustedPathPoint();
};

