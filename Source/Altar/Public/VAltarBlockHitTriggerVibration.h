#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDeviceTriggerVibrationProperty -FallbackName=InputDeviceTriggerVibrationProperty
//#include "GameFramework/InputDeviceProperties.h"

#include "VAltarBlockHitTriggerVibration.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UVAltarBlockHitTriggerVibration : public UObject /*UInputDeviceTriggerVibrationProperty*/ {
    GENERATED_BODY()
public:
    UVAltarBlockHitTriggerVibration();

};

