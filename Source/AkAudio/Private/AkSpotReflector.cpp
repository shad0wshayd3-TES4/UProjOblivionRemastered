#include "AkSpotReflector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AAkSpotReflector::AAkSpotReflector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpotReclectorRootComponent"));
    this->EarlyReflectionAuxBus = NULL;
    this->AcousticTexture = NULL;
    this->DistanceScalingFactor = 2.00f;
    this->Level = 1.00f;
    this->SameRoomOnly = false;
    this->EnableRoomOverride = false;
    this->RoomOverride = NULL;
}


