#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
#include "VMeleeAttackAnimInstance.h"
#include "VPrepareAttackAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVPrepareAttackAnimInstance : public UVMeleeAttackAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PrepareAttackAnim;
    
public:
    UVPrepareAttackAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPrepareAttackEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

