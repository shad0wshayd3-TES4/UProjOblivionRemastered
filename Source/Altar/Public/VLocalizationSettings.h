#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VLocalizationStringTable.h"
#include "VLocalizationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTAR_API UVLocalizationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVLocalizationStringTable> LocalizationTables;
    
    UVLocalizationSettings();

};

