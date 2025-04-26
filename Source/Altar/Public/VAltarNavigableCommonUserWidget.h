#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=VCommonUIEnhancedInputNavigation -ObjectName=VNavigableCommonUserWidgetBase -FallbackName=VNavigableCommonUserWidgetBase
#include "VNavigableCommonUserWidgetBase.h"

#include "VAltarNavigableCommonUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableCommonUserWidget : public UVNavigableCommonUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerTag;
    
public:
    UVAltarNavigableCommonUserWidget();

};

