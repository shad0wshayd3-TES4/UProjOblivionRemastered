#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DrawRoomComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawRoomComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawRoomComponent(const FObjectInitializer& ObjectInitializer);

};

