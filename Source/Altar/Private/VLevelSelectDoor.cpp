#include "VLevelSelectDoor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/BoxComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVLevelSelectDoor::AVLevelSelectDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoorText = FText::FromString(TEXT("None"));
    this->bUseDebugGamemode = false;
    this->MainStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Static Mesh"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision box"));
    this->BoxComponent->SetupAttachment(MainStaticMesh);
}


