#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Console -FallbackName=Console
#include "Engine/Console.h"

#include "VAltarConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVAltarConsole : public UConsole {
    GENERATED_BODY()
public:
    UVAltarConsole();

};

