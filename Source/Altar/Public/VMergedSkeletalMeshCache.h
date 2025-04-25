#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VMergedSkeletalMeshCache.generated.h"

class USkeletalMesh;
class UVMergedSkeletalMeshBuffer;
class UVMergedSkeletalMeshTask;

UCLASS(Blueprintable)
class UVMergedSkeletalMeshCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MergedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMergedSkeletalMeshTask* Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UVMergedSkeletalMeshBuffer*> WaitingBuffers;
    
    UVMergedSkeletalMeshCache();

};

