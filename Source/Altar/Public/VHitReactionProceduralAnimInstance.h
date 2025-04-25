#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "HitReactionData.h"
#include "VHitReactEvent.h"
#include "VHitReactionAnimInstance.h"
#include "VHitReactionProceduralAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVHitReactionProceduralAnimInstance : public UVHitReactionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitReactionData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RestrictedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadPhysicsBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionPhysicsBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoveryCurve;
    
public:
    UVHitReactionProceduralAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnPhysicsSimulationStop();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPhysicsSimulationStart();
    
    UFUNCTION(BlueprintCallable)
    void OnHitReaction(const FVHitReactEvent& HitReactEvent);
    
    UFUNCTION(BlueprintCallable)
    void InitHitReaction(const FName HitBoneName, const FVector HitDirection, bool bIsArrow, bool bIsPowerAttack, bool bIsSpell);
    
};

