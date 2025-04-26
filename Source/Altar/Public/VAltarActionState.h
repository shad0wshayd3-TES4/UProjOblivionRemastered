#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=VActorStateMachine -ObjectName=VState -FallbackName=VState
#include "VState.h"

#include "VAltarActionState.generated.h"

class AVPairedPawn;
class UVActorBehaviorBase;

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVAltarActionState : public UVState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVPairedPawn> PairedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActionStateFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVActorBehaviorBase*> ActiveBehaviors;
    
public:
    UVAltarActionState();

protected:
    UFUNCTION(BlueprintCallable)
    UVActorBehaviorBase* CreateBehaviorFromTemplate(UVActorBehaviorBase* BehaviorTemplate);
    
    UFUNCTION(BlueprintCallable)
    UVActorBehaviorBase* CreateBehaviorFromTag(FGameplayTag BehaviorTag);
    
};

