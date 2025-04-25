#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VDamageLogSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVDamageLogSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVDamageLogSubsystem();

};

