#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent
#include "VClairvoyanceNavLinkCustomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVClairvoyanceNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UVClairvoyanceNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

};

