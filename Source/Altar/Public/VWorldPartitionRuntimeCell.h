#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionRuntimeLevelStreamingCell -FallbackName=WorldPartitionRuntimeLevelStreamingCell
#include "WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h"

#include "VWorldPartitionRuntimeCell.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVWorldPartitionRuntimeCell : public UWorldPartitionRuntimeLevelStreamingCell {
    GENERATED_BODY()
public:
    UVWorldPartitionRuntimeCell();

};

