#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "OblivionToAltarFaceConversionValue.h"
#include "VOblivionToAltarFaceMorphsConversionMap.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOblivionToAltarFaceMorphsConversionMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOblivionToAltarFaceConversionValue> IndexMap;
    
    UVOblivionToAltarFaceMorphsConversionMap();

};

