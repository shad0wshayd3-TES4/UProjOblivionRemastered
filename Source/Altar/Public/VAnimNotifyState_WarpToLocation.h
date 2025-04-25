#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MotionWarping -ObjectName=AnimNotifyState_MotionWarping -FallbackName=AnimNotifyState_MotionWarping
#include "VAnimNotifyState_WarpToLocation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotifyState_WarpToLocation : public UAnimNotifyState_MotionWarping {
    GENERATED_BODY()
public:
    UVAnimNotifyState_WarpToLocation();

};

