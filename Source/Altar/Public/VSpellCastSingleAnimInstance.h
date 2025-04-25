#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
#include "SpellCastSingleAnimSet.h"
#include "VLayerCharacterAnimInstance.h"
#include "VSpellCastSingleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVSpellCastSingleAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpellCastSingleAnimSet AnimSet;
    
public:
    UVSpellCastSingleAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCastTouchRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastTouchLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastTargetLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastTargeRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastSelfRightEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnCastSelfLeftEnter(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
};

