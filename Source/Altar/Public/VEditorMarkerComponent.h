#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "VEditorMarkerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVEditorMarkerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UVEditorMarkerComponent(const FObjectInitializer& ObjectInitializer);

};

