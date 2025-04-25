#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonUserWidget -FallbackName=CommonUserWidget
#include "VAltarNotificationBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNotificationBaseWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UVAltarNotificationBaseWidget();

};

