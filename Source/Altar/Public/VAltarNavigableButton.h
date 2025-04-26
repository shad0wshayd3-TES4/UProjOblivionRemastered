#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=VCommonUIEnhancedInputNavigation -ObjectName=VNavigableButton -FallbackName=VNavigableButton
#include "VNavigableButton.h"

#include "VAltarNavigableButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableButton : public UVNavigableButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerTag;
    
public:
    UVAltarNavigableButton();

};

