#include "VWeapon_Bow.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVWeapon_Bow::AVWeapon_Bow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Main Skeletal Mesh Component"));
    this->MainSkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
}

void AVWeapon_Bow::OnShoot_Implementation() {
}

void AVWeapon_Bow::OnDraw_Implementation() {
}


