#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "VModernRebindSettingWidget.h"
#include "VModernGamepadRebindWidget.generated.h"

class UVAltarNavigableInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernGamepadRebindWidget : public UVModernRebindSettingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarNavigableInputKeySelector* GamepadKeySelector;
    
public:
    UVModernGamepadRebindWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnGamepadKeySelectorKeySelected(FInputChord NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadKeySelectorKeyChanged();
    
};

