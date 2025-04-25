#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "VClairvoyanceNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVClairvoyanceNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AVClairvoyanceNavLinkProxy(const FObjectInitializer& ObjectInitializer);

};

