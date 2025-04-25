#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "VNextState.h"
#include "VStateConditionDataAggregate.h"
#include "VStateBase.generated.h"

class UVStateMachineBase;
class UVStateMachineComponent;
class UVStateParameters;

UCLASS(Blueprintable)
class VACTORSTATEMACHINE_API UVStateBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateBaseTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVStateMachineComponent* ParentStateMachineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStateMachineBase* ParentStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThisStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVStateConditionDataAggregate DefaultConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVNextState> NextStates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVStateParameters*> StateParametersList;
    
    UVStateBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExited();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVStateMachineComponent* GetOwningStateMachineComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentStatesTags(FGameplayTagContainer& CurrentStatesTags);
    
};

