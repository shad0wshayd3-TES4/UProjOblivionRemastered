#include "VSubSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VSubSpaceComponent.h"
#include "VTESObjectRefComponent.h"

AVSubSpace::AVSubSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->SubSpaceComponent = CreateDefaultSubobject<UVSubSpaceComponent>(TEXT("SubSpaceComponent"));
    this->SubSpaceComponent->SetupAttachment(RootComponent);
}


