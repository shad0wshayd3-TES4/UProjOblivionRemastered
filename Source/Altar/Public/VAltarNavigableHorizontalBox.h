#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=VCommonUIEnhancedInputNavigation -ObjectName=VNavigableHorizontalBox -FallbackName=VNavigableHorizontalBox
#include "VNavigableHorizontalBox.h"

#include "VAltarNavigableHorizontalBox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableHorizontalBox : public UVNavigableHorizontalBox {
    GENERATED_BODY()
public:
    UVAltarNavigableHorizontalBox();

};

