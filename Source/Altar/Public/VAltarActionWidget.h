#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActionWidget -FallbackName=CommonActionWidget
#include "CommonActionWidget.h"

#include "VAltarActionWidget.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarActionWidget : public UCommonActionWidget {
    GENERATED_BODY()
public:
    UVAltarActionWidget();

};

