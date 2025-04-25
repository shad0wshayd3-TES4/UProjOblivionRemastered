#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AltarBI -ObjectName=VAltarBISaveIdentificationProvider -FallbackName=VAltarBISaveIdentificationProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "VBaseAltarSaveData.h"
#include "VAltarSaveIdentificationData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarSaveIdentificationData : public UVBaseAltarSaveData, public IVAltarBISaveIdentificationProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid SaveID;
    
public:
    UVAltarSaveIdentificationData();


    // Fix for true pure virtual functions not being implemented
};

