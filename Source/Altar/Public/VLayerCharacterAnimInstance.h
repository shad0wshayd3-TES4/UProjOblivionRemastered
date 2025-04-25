#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMontagePlayReturnType -FallbackName=EMontagePlayReturnType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VBaseCharacterAnimInstance.h"
#include "VLayerCharacterAnimInstance.generated.h"

class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class UVMainCharacterAnimInstance;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLayerCharacterAnimInstance : public UVBaseCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMainCharacterAnimInstance* MainAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimLayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimLayerPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot SavedPoseSnapshot;
    
public:
    UVLayerCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateActionDataFromArray(FGameplayTag ActionTag, const TArray<UAnimSequenceBase*>& ActionAnims);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionData(FGameplayTag ActionTag, const UAnimSequenceBase* ActionAnim);
    
    UFUNCTION(BlueprintCallable)
    void ScheduledPlayMontage(UAnimMontage* MontageToPlay, float InPlayRate, UAnimInstance* AnimInstance, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetSequenceFromArrayWithGivenIndexIfValid(int32 GameplayArrayIndex, const TArray<UAnimSequenceBase*>& ActionAnim);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetMontageFromArrayWithGivenIndexIfValid(int32 GameplayArrayIndex, const TArray<UAnimMontage*>& MontageArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVMainCharacterAnimInstance* GetMainAnimInstance();
    
};

