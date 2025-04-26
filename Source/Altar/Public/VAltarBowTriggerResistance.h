#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDeviceTriggerResistanceProperty -FallbackName=InputDeviceTriggerResistanceProperty
#include "GameFramework/InputDeviceProperties.h"

#include "VAltarBowTriggerResistance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UVAltarBowTriggerResistance : public UInputDeviceTriggerResistanceProperty {
    GENERATED_BODY()
public:
    UVAltarBowTriggerResistance();

};

