#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "VModdableBlueprint.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModdableBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UVModdableBlueprint();

};

