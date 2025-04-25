#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "VStateParameters.generated.h"

class UVStateBase;

UCLASS(Blueprintable, EditInlineNew)
class VACTORSTATEMACHINE_API UVStateParameters : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UVStateParameters();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Remove(UVStateBase* CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Apply(UVStateBase* CurrentState);
    
};

