#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DrawPortalComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawPortalComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawPortalComponent(const FObjectInitializer& ObjectInitializer);

};

