#include "AltarQMPAIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Altar -ObjectName=VAltarPathFollowingComponent -FallbackName=VAltarPathFollowingComponent

AAltarQMPAIController::AAltarQMPAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVAltarPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
}


