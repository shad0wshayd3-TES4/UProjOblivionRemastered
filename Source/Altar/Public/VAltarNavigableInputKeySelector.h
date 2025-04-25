#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=VCommonUIEnhancedInputNavigation -ObjectName=VNavigableInputKeySelector -FallbackName=VNavigableInputKeySelector
#include "OnWidgetFocussedDelegate.h"
#include "VAltarNavigableInputKeySelector.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarNavigableInputKeySelector : public UVNavigableInputKeySelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FText> LocalizedKeys;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetFocussed OnWidgetFocussedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DefaultBackgroundOverlay;
    
public:
    UVAltarNavigableInputKeySelector();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResfreshInputDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshLabelVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshLabelText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshIconImageVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRefreshIconImageBrush(const FSlateBrush& NewBrush);
    
    UFUNCTION(BlueprintCallable)
    FText GetHintKeyText(FKey InKey);
    
    UFUNCTION(BlueprintCallable)
    void AddNewlyReboundKeyToInputSystem(const FKey& NewlyReboundKey);
    
};

