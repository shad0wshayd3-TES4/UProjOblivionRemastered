#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputTrigger -FallbackName=InputTrigger
#include "InputTriggers.h"
#include "VModifierKeysInputTrigger.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVModifierKeysInputTrigger : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Shift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ctrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Alt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cmd;
    
    UVModifierKeysInputTrigger();

};

