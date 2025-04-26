#include "VOblivionPlayerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationBudgetAllocator -ObjectName=SkeletalMeshComponentBudgeted -FallbackName=SkeletalMeshComponentBudgeted
#include "SkeletalMeshComponentBudgeted.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "VAltarSpringArmComponent.h"
#include "VGrabArmComponent.h"

AVOblivionPlayerCharacter::AVOblivionPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->bRestrictedMeleeTargeting = false;
    this->InventoryCharacterReference = NULL;
    this->TelekinesisDistance = 0.00f;
    this->TelekinesisDuration = 0.00f;
    //this->CharacterCustomizationCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Customization Spring Arm"));
    //this->FirstPersonCameraSpringArmComponent = CreateDefaultSubobject<UVAltarSpringArmComponent>(TEXT("First Person Camera Spring Arm"));
    //this->ThirdPersonCameraSpringArmComponent = CreateDefaultSubobject<UVAltarSpringArmComponent>(TEXT("Camera Spring Arm"));
    //this->CameraBoneName = TEXT("Camera01_Anchor");
    this->bIsFacingObject = false;
    this->FPSClippingFixGlobalParameters = NULL;
    this->FPSClippingFixAverageFilterSize = 32;
    this->FPSClippingFixWallDetectionRadius = 160.00f;
    this->FPSClippingSSSWWorldUnitScaleFacingWall = 0.15f;
    this->bIsUsingFirstPersonMesh = false;
    //this->FirstPersonSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("First Person Skeletal Mesh"));
    //this->FirstPersonSkeletalMeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("First Person Root"));
    //this->FirstPersonUpperBodyChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("First Person Upper Body"));
    //this->FirstPersonHandsChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("First Person Hands"));
    //this->FirstPersonRightRingChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("First Person Right Ring"));
    //this->FirstPersonLeftRingChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("First Person Left Ring"));
    //this->GrabArmComponent = CreateDefaultSubobject<UVGrabArmComponent>(TEXT("Grab Spring Arm"));
    this->FirstPersonSectionBitMask = 4291952639;
    this->bIsPlayerFPSMeshBeingMadeVisible = false;
    /*this->CharacterCustomizationCameraSpringArm->SetupAttachment(RootComponent);
    this->FirstPersonCameraSpringArmComponent->SetupAttachment(FirstPersonSkeletalMeshComponent);
    this->FirstPersonHandsChildActorComponent->SetupAttachment(FirstPersonSkeletalMeshComponent);
    this->FirstPersonLeftRingChildActorComponent->SetupAttachment(FirstPersonSkeletalMeshComponent);
    this->FirstPersonRightRingChildActorComponent->SetupAttachment(FirstPersonSkeletalMeshComponent);
    this->FirstPersonSkeletalMeshComponent->SetupAttachment(FirstPersonSkeletalMeshRoot);
    this->FirstPersonSkeletalMeshRoot->SetupAttachment(FakeRoot);
    this->FirstPersonUpperBodyChildActorComponent->SetupAttachment(FirstPersonSkeletalMeshComponent);
    this->GrabArmComponent->SetupAttachment(FakeRoot);
    this->ThirdPersonCameraSpringArmComponent->SetupAttachment(FakeRoot);*/

    this->CharacterCustomizationCameraSpringArm = NULL;
    this->FirstPersonCameraSpringArmComponent = NULL;
    this->FirstPersonHandsChildActorComponent = NULL;
    this->FirstPersonLeftRingChildActorComponent = NULL;
    this->FirstPersonRightRingChildActorComponent = NULL;
    this->FirstPersonSkeletalMeshComponent = NULL;
    this->FirstPersonSkeletalMeshRoot = NULL;
    this->FirstPersonUpperBodyChildActorComponent = NULL;
    this->GrabArmComponent = NULL;
    this->ThirdPersonCameraSpringArmComponent = NULL;

}

void AVOblivionPlayerCharacter::SetUseBowAimingRotation(bool bUseBowRotation) {
}

void AVOblivionPlayerCharacter::SetLastHitObjectRefComponent(UVTESObjectRefComponent* Component) {
}

void AVOblivionPlayerCharacter::ResetInstance() {
}

void AVOblivionPlayerCharacter::RequestPowerAttack() const {
}

void AVOblivionPlayerCharacter::RefreshFPSClippingFixFirstPersonBody(bool bShoudForceRefresh) {
}

void AVOblivionPlayerCharacter::OnTorchChanged_Implementation(const AActor* TorchActor, bool bEquipping) {
}

void AVOblivionPlayerCharacter::OnStartTelekinesisPushAction() {
}

void AVOblivionPlayerCharacter::OnStartTelekinesisPullAction() {
}

bool AVOblivionPlayerCharacter::OnStartTelekinesisAction() {
    return false;
}

bool AVOblivionPlayerCharacter::OnStartGrabAction() {
    return false;
}

void AVOblivionPlayerCharacter::OnQuiverChanged(const AVQuiver* QuiverActor, bool bEquipping) {
}

void AVOblivionPlayerCharacter::OnPlayFailCastSound_Implementation(EMagicSchool MagicSchool) {
}







void AVOblivionPlayerCharacter::OnEndTelekinesisPushAction() {
}

void AVOblivionPlayerCharacter::OnEndTelekinesisPullAction() {
}

void AVOblivionPlayerCharacter::OnEndTelekinesisAction() {
}

void AVOblivionPlayerCharacter::OnEndGrabAction() {
}


FString AVOblivionPlayerCharacter::GetSubLevelName() const {
    return TEXT("");
}

UVTESObjectRefComponent* AVOblivionPlayerCharacter::GetLastHitObjectRefComponent() {
    return NULL;
}

AVInventoryPlayerCharacter* AVOblivionPlayerCharacter::GetInventoryPlayer() const {
    return NULL;
}

bool AVOblivionPlayerCharacter::CanTryInteract() const {
    return false;
}


