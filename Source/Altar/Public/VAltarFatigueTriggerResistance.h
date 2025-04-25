#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDeviceTriggerResistanceProperty -FallbackName=InputDeviceTriggerResistanceProperty
#include "VAltarFatigueTriggerResistance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UVAltarFatigueTriggerResistance : public UInputDeviceTriggerResistanceProperty {
    GENERATED_BODY()
public:
    UVAltarFatigueTriggerResistance();

};

