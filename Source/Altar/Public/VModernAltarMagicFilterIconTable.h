#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "ELegacyMagicMenuSortType.h"
#include "ModernMagicFilterTableRow.h"
#include "VModernAltarMagicFilterIconTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernAltarMagicFilterIconTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELegacyMagicMenuSortType, FModernMagicFilterTableRow> MagicFilterIconDesign;
    
public:
    UVModernAltarMagicFilterIconTable();

};

