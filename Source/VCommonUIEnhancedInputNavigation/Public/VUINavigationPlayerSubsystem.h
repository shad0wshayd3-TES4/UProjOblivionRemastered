#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "VUINavigationPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVUINavigationPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UVUINavigationPlayerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftKeyDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCtrlKeyDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAltKeyDown() const;
    
};

