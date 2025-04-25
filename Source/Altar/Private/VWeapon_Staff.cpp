#include "VWeapon_Staff.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVWeapon_Staff::AVWeapon_Staff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Mesh Component"));
    this->MainStaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}

void AVWeapon_Staff::OnFire_Implementation() {
}

void AVWeapon_Staff::OnChargeUp_Implementation() {
}


