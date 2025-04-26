#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Water -ObjectName=BuoyancyComponent -FallbackName=BuoyancyComponent
#include "BuoyancyComponent.h"

#include "VBuoyancyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVBuoyancyComponent : public UBuoyancyComponent {
    GENERATED_BODY()
public:
    UVBuoyancyComponent(const FObjectInitializer& ObjectInitializer);

};

