#include "UE5AltarPairingActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputComponent -FallbackName=InputComponent

AUE5AltarPairingActor::AUE5AltarPairingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("Input Component"));
}


