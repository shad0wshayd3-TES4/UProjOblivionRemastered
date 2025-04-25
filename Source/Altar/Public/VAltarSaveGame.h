#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "SerializedAltarSaveData.h"
#include "VSaveGameDetails.h"
#include "VAltarSaveGame.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> OblivionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSaveGameDetails SaveGameDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSerializedAltarSaveData> SerializedAltarSaveDataArray;
    
    UVAltarSaveGame();

};

