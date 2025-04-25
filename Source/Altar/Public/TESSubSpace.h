#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TESBoundObject.h"
#include "TESSubSpace.generated.h"

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESSubSpace : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Dimensions;
    
    UTESSubSpace();

};

