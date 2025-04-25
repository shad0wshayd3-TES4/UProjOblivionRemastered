#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "EVAltarCompressionMethod.h"
#include "VAltarSaveContainer.generated.h"

UCLASS(Blueprintable)
class UVAltarSaveContainer : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SaveVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVAltarCompressionMethod CompressionMethod;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> AltarSaveData;
    
public:
    UVAltarSaveContainer();

};

