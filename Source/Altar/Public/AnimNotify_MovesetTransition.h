#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"

#include "AnimNotify_MovesetTransition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UAnimNotify_MovesetTransition : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotify_MovesetTransition();

};

