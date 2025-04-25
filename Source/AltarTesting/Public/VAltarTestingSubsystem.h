#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VAltarTestingSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTARTESTING_API UVAltarTestingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVAltarTestingSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnLevelChangeStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelChangeCompleted();
    
};

