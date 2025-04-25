#include "VModularBodyPartBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Templates/SubclassOf.h"

AVModularBodyPartBase::AVModularBodyPartBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Root Skeletal Mesh"));
    this->RootSkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->MaleBodySectionHidden = 0;
    this->FemaleBodySectionHidden = 0;
}

void AVModularBodyPartBase::OnAttachToLeaderComponent_Implementation(USkeletalMeshComponent* MasterComponent) {
}

void AVModularBodyPartBase::OnAttachedToPhenotype_Implementation(UVCharacterPhenotypeData* PhenotypeData, UTESRace* CharacterRace, ECharacterSex CharacterSex) {
}

void AVModularBodyPartBase::OnAttachedInFirstPerson_Implementation() {
}

TSubclassOf<AVModularBodyPartBase> AVModularBodyPartBase::GetModularBodyPartClassFromSlot(EBipedModularBodySlot Slot) {
    return NULL;
}


