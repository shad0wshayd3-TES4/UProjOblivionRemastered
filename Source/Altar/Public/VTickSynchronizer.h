#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "VTickSynchronizer.generated.h"

class UVLevelChangeData;

UCLASS(Blueprintable)
class AVTickSynchronizer : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVLevelChangeData* LevelData;
    
public:
    AVTickSynchronizer(const FObjectInitializer& ObjectInitializer);

};

