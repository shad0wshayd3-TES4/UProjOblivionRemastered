#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "Navigation/NavLinkProxy.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "VDoorNavLinkProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API AVDoorNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FTimerHandle> ControllerTimerPairs;
    
public:
    AVDoorNavLinkProxy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSmartNavLinkReached(const AActor* MovingActor, const FVector& DestinationPoint);
    
};

