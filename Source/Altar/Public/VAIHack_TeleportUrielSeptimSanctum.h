#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "VAIHack_TeleportUrielSeptimSanctum.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVAIHack_TeleportUrielSeptimSanctum : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TeleportTransform;
    
public:
    AVAIHack_TeleportUrielSeptimSanctum(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DeactivateTeleport();
    
};

