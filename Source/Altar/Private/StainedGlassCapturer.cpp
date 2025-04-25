#include "StainedGlassCapturer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D

AStainedGlassCapturer::AStainedGlassCapturer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->BakedGlassTexture = NULL;
    this->MaterialParameterCollection = NULL;
    this->CaptureResolution = 512;
    this->PercentageBorderOffset = 0.10f;
}

void AStainedGlassCapturer::PrepareMaterialParameterCollection() {
}

float AStainedGlassCapturer::FindOrthoWidthForBox(FVector Extents, FRotator Rotator, float Offset) {
    return 0.0f;
}

void AStainedGlassCapturer::CollectSceneActors() {
}

void AStainedGlassCapturer::BakeGlassTexture() {
}


