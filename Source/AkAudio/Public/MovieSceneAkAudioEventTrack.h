#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "Compilation/IMovieSceneTrackTemplateProducer.h"

#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UObject /*public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer*/ {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();

    //virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

    // Fix for true pure virtual functions not being implemented
};
