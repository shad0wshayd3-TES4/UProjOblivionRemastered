#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "OnboardingFlowTableRow.h"
#include "VModernOnboardingFlowTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernOnboardingFlowTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnboardingFlowTableRow> Flow;
    
public:
    UVModernOnboardingFlowTable();

};

