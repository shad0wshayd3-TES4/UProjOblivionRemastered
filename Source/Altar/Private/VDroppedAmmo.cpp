#include "VDroppedAmmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "VAltarAkComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVDroppedAmmo::AVDroppedAmmo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootArrowStaticMeshComponent"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->RootArrowStaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->ArrowStaticMeshComponents.AddDefaulted(6);
    this->QuiverStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("QuiverStaticMeshComponent"));
    this->AkAudioComponent->SetupAttachment(RootComponent);
    this->QuiverStaticMeshComponent->SetupAttachment(RootComponent);
}

void AVDroppedAmmo::ReinitializePhysicsSimulationState() {
}


