#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VVFXBlueprint.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVVFXBlueprint : public AActor {
    GENERATED_BODY()
public:
    AVVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PauseThisVFX(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPause(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeFirstPerson(bool bIsFirstPerson);
    
};

