#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CancellableAsyncAction -FallbackName=CancellableAsyncAction
#include "Engine/CancellableAsyncAction.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"

#include "PushContentToLayerAsyncDelegateDelegate.h"
#include "AsyncAction_PushWidgetToLayer.generated.h"

class UAsyncAction_PushWidgetToLayer;
class UCommonActivatableWidget;
class UVAltarMenu;

UCLASS(Blueprintable)
class ALTAR_API UAsyncAction_PushWidgetToLayer : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushContentToLayerAsyncDelegate BeforePush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushContentToLayerAsyncDelegate AfterPush;
    
    UAsyncAction_PushWidgetToLayer();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAsyncAction_PushWidgetToLayer* PushWidgetToLayer(TSoftClassPtr<UCommonActivatableWidget> WidgetClass, FGameplayTag LayerName, bool bSuspendInputUntilComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAsyncAction_PushWidgetToLayer* PushDefaultMenuToLayer(TSoftClassPtr<UVAltarMenu> ParentMenuClass, FGameplayTag LayerName, bool bSuspendInputUntilComplete);
    
};

