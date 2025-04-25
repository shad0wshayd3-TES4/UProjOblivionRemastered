#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "FormID.h"
#include "VInventoryPreviewPositionOverride.h"
#include "VPreviewDefaultLocationRotationTableRow.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPreviewDefaultLocationRotationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FormID FormType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVInventoryPreviewPositionOverride DefaultParameters;
    
    FVPreviewDefaultLocationRotationTableRow();
};

