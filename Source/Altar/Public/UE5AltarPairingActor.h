#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UE5AltarPairingActor.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AUE5AltarPairingActor : public AActor {
    GENERATED_BODY()
public:
    AUE5AltarPairingActor(const FObjectInitializer& ObjectInitializer);

};

