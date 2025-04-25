#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "VAltarBlueprintTable.generated.h"

class UVModdableBlueprint;

UCLASS(Blueprintable)
class ALTAR_API UVAltarBlueprintTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, TSoftObjectPtr<UVModdableBlueprint>> BlueprintsMap;
    
public:
    UVAltarBlueprintTable();

};

