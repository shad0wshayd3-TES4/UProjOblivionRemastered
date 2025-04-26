#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionLevelStreamingPolicy -FallbackName=WorldPartitionLevelStreamingPolicy
//#include "WorldPartition/WorldPartitionLevelStreamingPolicy.h"

#include "VWorldPartitionStreamingPolicy.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVWorldPartitionStreamingPolicy : public UObject /*UWorldPartitionLevelStreamingPolicy*/ {
    GENERATED_BODY()
public:
    UVWorldPartitionStreamingPolicy();

};

