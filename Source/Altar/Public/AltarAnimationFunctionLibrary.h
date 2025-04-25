#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AltarAnimationFunctionLibrary.generated.h"

class UAnimSequence;
class UBlendSpace;

UCLASS(Blueprintable)
class UAltarAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAltarAnimationFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequence* GetMostRelevantAnimationForBlendspaceBlendValues(UBlendSpace* BlendspaceAsset, FVector BlendValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesBlendspaceHaveAnimationForBlendValue(UBlendSpace* BlendspaceAsset, FVector BlendValues);
    
};

