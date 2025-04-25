#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VCharacterSkinParameter.h"
#include "VCharacterSkinParameterDefinitions.generated.h"

UCLASS(Blueprintable)
class UVCharacterSkinParameterDefinitions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVCharacterSkinParameter> FaceSkinParameterIndexesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVCharacterSkinParameter> BodySkinParameterIndexesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVCharacterSkinParameter> HairColorParameterIndexesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> FaceMaterialSlotIndexesMap;
    
    UVCharacterSkinParameterDefinitions();

};

