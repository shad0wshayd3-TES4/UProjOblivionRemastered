#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteeringBehaviors -ObjectName=SteeringBehaviorsPathFollowingComponent -FallbackName=SteeringBehaviorsPathFollowingComponent
#include "VAltarPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAltarPathFollowingComponent : public USteeringBehaviorsPathFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStrafingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectPawnTrackingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInDebugMode;
    
    UVAltarPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

