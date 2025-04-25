#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VFastTransitionSubSystem.generated.h"

class UVFastTransition;

UCLASS(Blueprintable)
class ALTAR_API UVFastTransitionSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVFastTransition* FastTransition;
    
    UVFastTransitionSubSystem();

};

