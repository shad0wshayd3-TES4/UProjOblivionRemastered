#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "VLevelSelectSettings.generated.h"

class AVLevelSelectDoor;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class UVLevelSelectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVLevelSelectDoor> DoorActor;
    
    UVLevelSelectSettings();

};

