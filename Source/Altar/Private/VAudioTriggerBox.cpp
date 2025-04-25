#include "VAudioTriggerBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AVAudioTriggerBox::AVAudioTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->Box->SetupAttachment(RootComponent);
}

void AVAudioTriggerBox::ExitBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AVAudioTriggerBox::EnterBox(AActor* OverlappedActor, AActor* OtherActor) {
}


