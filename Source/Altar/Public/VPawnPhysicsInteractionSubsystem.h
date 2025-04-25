#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "VPawnPhysicsInteractionData.h"
#include "VPawnPhysicsInteractionSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVPawnPhysicsInteractionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVPawnPhysicsInteractionData> OngoingInteractions;
    
public:
    UVPawnPhysicsInteractionSubsystem();

};

