#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VAIProcedureExecution_Base.generated.h"

class AVPairedPawnAIController;

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVAIProcedureExecution_Base : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawnAIController* AIController;
    
public:
    UVAIProcedureExecution_Base();

};

