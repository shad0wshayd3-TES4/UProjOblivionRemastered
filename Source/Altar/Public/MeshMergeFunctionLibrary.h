#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SkeletalMeshMergeParams.h"
#include "MeshMergeFunctionLibrary.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class ALTAR_API UMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshMergeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
    
};

