#include "VInventoryPlayerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI

AVInventoryPlayerCharacter::AVInventoryPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->AkAudioComponent = NULL;
    this->PhysicalAnimationComponent = NULL;
    this->PawnSoundPairingComponent = NULL;
    this->bIsInItemPreviewMode = false;
}

void AVInventoryPlayerCharacter::SetLightChannelOnCharacter() {
}

void AVInventoryPlayerCharacter::SetInventoryPlayerEquipment(EBipedModularBodySlot Slot, const UTESForm* form) {
}

void AVInventoryPlayerCharacter::OnAppearanceRefreshedEnded() {
}

void AVInventoryPlayerCharacter::OnAppearanceRefresh(const UVCharacterPhenotypeData* Preset) {
}

void AVInventoryPlayerCharacter::ForceLOD0OnCharacter() {
}


