#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "VModernRebindSettingWidget.h"
#include "VModernKeyboardRebindWidget.generated.h"

class UVAltarNavigableInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernKeyboardRebindWidget : public UVModernRebindSettingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarNavigableInputKeySelector* PrimaryKeyboardKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarNavigableInputKeySelector* SecondaryKeyboardKeySelector;
    
public:
    UVModernKeyboardRebindWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSecondaryKeyboardKeySelectorKeySelected(FInputChord NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryKeyboardKeySelectorKeyChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryKeyboardKeySelectorKeySelected(FInputChord NewInputChord);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryKeyboardKeySelectorKeyChanged();
    
};

