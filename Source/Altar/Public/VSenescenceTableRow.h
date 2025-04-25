#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VHairSenescenceTable.h"
#include "VSenescenceTableRow.generated.h"

class UVSenescenceLevel;

USTRUCT(BlueprintType)
struct FVSenescenceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UVSenescenceLevel>> HeadSenescences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UVSenescenceLevel>> BodySenescences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVHairSenescenceTable> HairSenescences;
    
    ALTAR_API FVSenescenceTableRow();
};

