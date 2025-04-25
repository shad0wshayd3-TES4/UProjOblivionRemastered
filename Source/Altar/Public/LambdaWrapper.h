#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LambdaWrapper.generated.h"

UCLASS(Blueprintable)
class ULambdaWrapper : public UObject {
    GENERATED_BODY()
public:
    ULambdaWrapper();

    UFUNCTION(BlueprintCallable)
    void Execute();
    
};

