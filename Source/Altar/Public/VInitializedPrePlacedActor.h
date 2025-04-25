#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VInitializedPrePlacedActor.generated.h"

class AVActor;

UCLASS(Blueprintable)
class ALTAR_API UVInitializedPrePlacedActor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVActor* Actor;
    
    UVInitializedPrePlacedActor();

};

