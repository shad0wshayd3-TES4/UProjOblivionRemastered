#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "VStateCondition.generated.h"

class UVStateBase;

UCLASS(Blueprintable, EditInlineNew)
class VACTORSTATEMACHINE_API UVStateCondition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UVStateCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInit(UVStateBase* OwnerState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCondition(UVStateBase* CurrentState);
    
};

