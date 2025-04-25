#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VHumanoidLowerAndUpperBodySetup.h"
#include "VLayerCharacterAnimInstance.h"
#include "VTurnInPlace.h"
#include "VTurnInPlaceCharacterAnimInstance.generated.h"

class UBlendSpace;
class UCharacterMovementComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVTurnInPlaceCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLayerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SneakingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BowDrawTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTurnInPlace TurnInPlaceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHumanoidLowerAndUpperBodySetup TurnInPlaceBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootYawRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpperBodyBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSneaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyForNextTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* AimBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAimOffset;
    
public:
    UVTurnInPlaceCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateTurnSystem();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOffsets();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimStatus();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAimingOffset();
    
    UFUNCTION(BlueprintCallable)
    void TriggerTurnInPlace(float InTurnAngle);
    
    UFUNCTION(BlueprintCallable)
    void TriggerStartTurn();
    
    UFUNCTION(BlueprintCallable)
    void TriggerLastTurn();
    
    UFUNCTION(BlueprintCallable)
    void SafeUpdateTurnValues();
    
    UFUNCTION(BlueprintCallable)
    void SafeUpdatePawnStates();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTurnTransitionStateEntry(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnIdleStateEntry(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsTurnInPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurnTooSmall(float Angle) const;
    
    UFUNCTION(BlueprintCallable)
    void IsOnHorse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPawnHasTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurningYawAimOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStopState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRootOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInterruptionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimYawRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimRotationRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorOffset() const;
    
};

