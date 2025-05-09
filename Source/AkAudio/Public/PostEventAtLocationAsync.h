#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"

#include "PostEventAtLocationAsyncOutputPinDelegate.h"
#include "PostEventAtLocationAsync.generated.h"

class UAkAudioEvent;
class UObject;
class UPostEventAtLocationAsync;

UCLASS(Blueprintable)
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostEventAtLocationAsyncOutputPin Completed;
    
    UPostEventAtLocationAsync();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    
private:
    UFUNCTION(BlueprintCallable)
    void PollPostEventFuture();
    
};

