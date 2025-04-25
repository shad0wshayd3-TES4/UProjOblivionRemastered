#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EAttackActionType.h"
#include "TestAnimCharacterBase.generated.h"

class UPrimitiveComponent;
class USceneComponent;
class UTestAnimInstanceBase;

UCLASS(Blueprintable)
class ALTAR_API ATestAnimCharacterBase : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttackRaycastStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTestAnimInstanceBase* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnTowardsMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasWeaponDrawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInDamageSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentAimPosition;
    
public:
    ATestAnimCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetAimPosition(FVector AimPosition);
    
    UFUNCTION(BlueprintCallable)
    void ScanHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitImpact(FVector ImpactPoint, UPrimitiveComponent* HitComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimJumpStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimDamageSectionStart();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimDamageSectionEnd();
    
    UFUNCTION(BlueprintCallable)
    void MoveTowardsFromControlRotation(FVector2D Direction, bool Run);
    
    UFUNCTION(BlueprintCallable)
    FHitResult MeleeAttackRaycast();
    
    UFUNCTION(BlueprintCallable)
    void LeaveCombatMode();
    
    UFUNCTION(BlueprintCallable)
    void EnterCombatMode();
    
    UFUNCTION(BlueprintCallable)
    void AttemptStartAttack(EAttackActionType AttackType);
    
};

