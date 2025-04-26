#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=VActorStateMachine -ObjectName=VStateCondition -FallbackName=VStateCondition
#include "VStateCondition.h"

#include "VAltarStateConditionBase.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarStateConditionBase : public UVStateCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVPairedPawn* PairedPawn;
    
public:
    UVAltarStateConditionBase();

};

