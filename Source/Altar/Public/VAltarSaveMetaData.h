#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "GameFramework/SaveGame.h"

#include "VSaveGameDetails.h"
#include "VSaveNumbers.h"
#include "VAltarSaveMetaData.generated.h"

UCLASS(Blueprintable)
class UVAltarSaveMetaData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVSaveGameDetails> AllSavesDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FVSaveNumbers> SaveCounter;
    
public:
    UVAltarSaveMetaData();

};

