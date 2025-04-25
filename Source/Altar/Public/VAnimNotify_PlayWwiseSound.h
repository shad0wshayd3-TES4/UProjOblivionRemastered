#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "VAnimNotify_PlayWwiseSound.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_PlayWwiseSound : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
public:
    UVAnimNotify_PlayWwiseSound();

};

