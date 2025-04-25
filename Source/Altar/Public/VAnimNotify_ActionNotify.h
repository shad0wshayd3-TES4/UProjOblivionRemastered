#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VAnimNotify_ActionNotify.generated.h"

class AVPairedPawn;
class UVPawnAnimatedAction;

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_ActionNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveWhenOwnerInvisible;
    
    UVAnimNotify_ActionNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerEventOnAnimatedAction(AVPairedPawn* PairedPawn, UVPawnAnimatedAction* AnimatedAction) const;
    
};

