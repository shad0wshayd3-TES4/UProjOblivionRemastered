#include "VActivableStatic.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVActivableStatic::AVActivableStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("StaticMeshComponent"))) {
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}

void AVActivableStatic::AttachNativeSceneComponentsToRoot() {
}


