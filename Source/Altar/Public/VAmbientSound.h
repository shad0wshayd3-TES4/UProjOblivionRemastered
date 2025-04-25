#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VAudioPlayable.h"
#include "VAmbientSound.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class ALTAR_API AVAmbientSound : public AActor, public IVAudioPlayable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AmbientEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopAmbientEvent;
    
public:
    AVAmbientSound(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

