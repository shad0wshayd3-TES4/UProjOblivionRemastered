#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=VCommonUIEnhancedInputNavigation -ObjectName=VNavigableEditableText -FallbackName=VNavigableEditableText
#include "VNavigableEditableText.h"

#include "VAltarNavigableEditableText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableEditableText : public UVNavigableEditableText {
    GENERATED_BODY()
public:
    UVAltarNavigableEditableText();

    UFUNCTION(BlueprintCallable)
    void StopEditText();
    
    UFUNCTION(BlueprintCallable)
    void StartEditText();
    
};

