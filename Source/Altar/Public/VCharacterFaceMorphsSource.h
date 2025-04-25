#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CharacterFaceMorphAxis.h"
#include "VCharacterFaceMorphsSource.generated.h"

class UVOblivionToAltarFaceMorphsConversionMap;

UCLASS(Blueprintable)
class ALTAR_API UVCharacterFaceMorphsSource : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVOblivionToAltarFaceMorphsConversionMap* OblivionFaceMorphsConversionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharacterFaceMorphAxis> MorphAxisMap;
    
    UVCharacterFaceMorphsSource();

};

