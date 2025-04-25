#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EVNavigationDirection.h"
#include "VEnhancedInputNavigable.generated.h"

class IVEnhancedInputNavigable;
class UVEnhancedInputNavigable;

UINTERFACE(Blueprintable, MinimalAPI)
class UVEnhancedInputNavigable : public UInterface {
    GENERATED_BODY()
};

class IVEnhancedInputNavigable : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNavigable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetWidgetLayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IVEnhancedInputNavigable> GetNavigationWidgetForAction(EVNavigationDirection Action) const;
    
};

