#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "VDebugTextContent.h"
#include "VAltarHud.generated.h"

class UVPrimaryGameLayout;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API AVAltarHud : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOblivionDebugTextIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVDebugTextContent> OblivionDebugTextContent;
    
    AVAltarHud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVPrimaryGameLayout* GetPrimaryGameLayout() const;
    
};

