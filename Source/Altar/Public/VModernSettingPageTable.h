#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "ModernSettingPageTableRow.h"
#include "VModernSettingPageTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingPageTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingPageTableRow> Pages;
    
public:
    UVModernSettingPageTable();

};

