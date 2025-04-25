#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=EWwiseLanguageRequirement -FallbackName=EWwiseLanguageRequirement
#include "WwiseSharedLanguageId.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseSharedLanguageId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseLanguageRequirement LanguageRequirement;
    
    FWwiseSharedLanguageId();
};

