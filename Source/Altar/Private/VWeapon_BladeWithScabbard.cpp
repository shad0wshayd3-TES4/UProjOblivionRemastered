#include "VWeapon_BladeWithScabbard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVWeapon_BladeWithScabbard::AVWeapon_BladeWithScabbard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScabbardMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scabbard Mesh Component"));
    this->ScabbardMeshComponent->SetupAttachment(RootComponent);
}


