#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelViewViewModel -ObjectName=MVVMViewModelBase -FallbackName=MVVMViewModelBase
#include "VViewModelBase.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVViewModelBase : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UVViewModelBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGamertagText() const;
    
};

