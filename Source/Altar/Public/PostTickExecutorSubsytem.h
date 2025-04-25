#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PostTickExecutorSubsytem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UPostTickExecutorSubsytem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPostTickExecutorSubsytem();

};

