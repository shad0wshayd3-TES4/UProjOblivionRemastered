#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemModuleConfig -FallbackName=NavigationSystemModuleConfig
#include "VAltarNavigationSystemModuleConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAltarNavigationSystemModuleConfig : public UNavigationSystemModuleConfig {
    GENERATED_BODY()
public:
    UVAltarNavigationSystemModuleConfig();

};

