#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VPrePlacedGuidToAsyncFlowHashRow.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPrePlacedGuidToAsyncFlowHashRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CellNameForAsyncFlow;
    
    FVPrePlacedGuidToAsyncFlowHashRow();
};

