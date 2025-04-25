#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VSettingsPageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVSettingsPageInterface : public UInterface {
    GENERATED_BODY()
};

class IVSettingsPageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesAllowNavigation() const;
    
};

