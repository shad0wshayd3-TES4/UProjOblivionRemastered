#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VUsablePropItem.h"
#include "VPropItem.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVPropItem : public AActor, public IVUsablePropItem {
    GENERATED_BODY()
public:
    AVPropItem(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

