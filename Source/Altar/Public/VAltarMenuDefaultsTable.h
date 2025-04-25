#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "VAltarMenuDefaults.h"
#include "VAltarMenuDefaultsTable.generated.h"

class UVAltarMenu;

UCLASS(Blueprintable)
class ALTAR_API UVAltarMenuDefaultsTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UVAltarMenu>, FVAltarMenuDefaults> MenuDefaultsMap;
    
public:
    UVAltarMenuDefaultsTable();

};

