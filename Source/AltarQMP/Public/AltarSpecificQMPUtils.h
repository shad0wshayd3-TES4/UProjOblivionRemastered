#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=QMPUnrealIntegration -ObjectName=SpecificClassUtils -FallbackName=SpecificClassUtils
#include "AltarSpecificQMPUtils.generated.h"

UCLASS(Blueprintable)
class ALTARQMP_API UAltarSpecificQMPUtils : public USpecificClassUtils {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KilledID;
    
public:
    UAltarSpecificQMPUtils();

};

