#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyEvent -FallbackName=AnimNotifyEvent
#include "AnimNotifyActionEventInfo.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UAnimNotifyActionEventInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyEvent AnimNotifyEvent;
    
    UAnimNotifyActionEventInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNotifyDuration();
    
};

