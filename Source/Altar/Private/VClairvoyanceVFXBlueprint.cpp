#include "VClairvoyanceVFXBlueprint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AVClairvoyanceVFXBlueprint::AVClairvoyanceVFXBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->ClairvoyanceVFXNavigationQueryFilterClass = NULL;
    this->WaterNavAreaClass = NULL;
}




