#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VUISaveSystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVUISaveSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVUISaveSystem();

};

