#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkelMeshMergeSectionMapping -FallbackName=SkelMeshMergeSectionMapping
#include <SkeletalMeshMerge.h>

#include "VMergedSkeletalMeshTask.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class UVMergedSkeletalMeshTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeSectionMapping> SectionMappings;
    
    UVMergedSkeletalMeshTask();

};

