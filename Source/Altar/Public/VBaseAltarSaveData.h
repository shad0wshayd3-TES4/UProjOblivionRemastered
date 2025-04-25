#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VBaseAltarSaveData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVBaseAltarSaveData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 Version;
    
    UVBaseAltarSaveData();

};

