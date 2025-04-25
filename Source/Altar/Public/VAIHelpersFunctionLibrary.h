#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VAIHelpersFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API UVAIHelpersFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAIHelpersFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SortActorsByGameTime(TArray<AActor*> InActors, TArray<AActor*>& SortedActors);
    
};

