#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "VAltarCursor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarCursor : public UUserWidget {
    GENERATED_BODY()
public:
    UVAltarCursor();

    UFUNCTION(BlueprintCallable)
    static void SetCursorVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursorVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursorSize(float Delta);
    
};

