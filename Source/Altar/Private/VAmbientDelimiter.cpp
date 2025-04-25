#include "VAmbientDelimiter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AVAmbientDelimiter::AVAmbientDelimiter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftAmbientEvent = NULL;
    this->RightAmbientEvent = NULL;
    this->StopDelimiterAmbientEvent = NULL;
    this->SplineWidth = 100.00f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
}


