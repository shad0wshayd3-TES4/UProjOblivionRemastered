#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonGameViewportClient -FallbackName=CommonGameViewportClient
#include "AltarCommonGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UAltarCommonGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UAltarCommonGameViewportClient();

};

