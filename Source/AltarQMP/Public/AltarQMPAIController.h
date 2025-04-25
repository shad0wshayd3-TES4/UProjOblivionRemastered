#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=QMPUnrealIntegration -ObjectName=QMPAIController -FallbackName=QMPAIController
#include "AltarQMPAIController.generated.h"

UCLASS(Blueprintable)
class ALTARQMP_API AAltarQMPAIController : public AQMPAIController {
    GENERATED_BODY()
public:
    AAltarQMPAIController(const FObjectInitializer& ObjectInitializer);

};

