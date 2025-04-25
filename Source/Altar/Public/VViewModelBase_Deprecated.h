#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VViewModelBase_Deprecated.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVViewModelBase_Deprecated : public UObject {
    GENERATED_BODY()
public:
    UVViewModelBase_Deprecated();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterDelegates();
    
};

