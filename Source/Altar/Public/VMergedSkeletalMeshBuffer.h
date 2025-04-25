#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VMergedSkeletalMeshBuffer.generated.h"

class UVMergedSkeletalMeshCache;
class UVMergedSkeletalMeshQuery;

UCLASS(Blueprintable)
class UVMergedSkeletalMeshBuffer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVMergedSkeletalMeshCache*> KeepAliveHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMergedSkeletalMeshCache* UsingCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVMergedSkeletalMeshQuery*> PendingQueries;
    
    UVMergedSkeletalMeshBuffer();

};

