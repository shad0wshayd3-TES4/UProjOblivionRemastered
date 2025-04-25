#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VAudioHandlersSubsystem.generated.h"

class AVMusicPlayer;
class AVWaterSoundFollower;
class AVWeatherAudioPlayer;

UCLASS(Blueprintable)
class ALTAR_API UVAudioHandlersSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVMusicPlayer* MusicPlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVWeatherAudioPlayer* WeatherAudioPlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVWaterSoundFollower* WaterSoundFollowerActor;
    
public:
    UVAudioHandlersSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVWeatherAudioPlayer* GetWeatherAudioPlayerActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVMusicPlayer* GetMusicPlayerActor();
    
};

