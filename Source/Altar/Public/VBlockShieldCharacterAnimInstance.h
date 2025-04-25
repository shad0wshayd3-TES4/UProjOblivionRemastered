#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
#include "VBlockCharacterAnimInstance.h"
#include "VBlockShieldCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBlockShieldCharacterAnimInstance : public UVBlockCharacterAnimInstance {
    GENERATED_BODY()
public:
    UVBlockShieldCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockShieldHitEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShield() const;
    
};

