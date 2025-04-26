#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "Compilation/IMovieSceneTrackTemplateProducer.h"

#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioRTPCTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioRTPCTrack : public UObject /*UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer*/ {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioRTPCTrack();


    // Fix for true pure virtual functions not being implemented
    //virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

};

