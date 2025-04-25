#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AkWaapiFieldNames.h"
#include "SAkWaapiFieldNamesConv.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USAkWaapiFieldNamesConv();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    
};

