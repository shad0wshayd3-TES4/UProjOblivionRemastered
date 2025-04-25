#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AltarKeyInputReplayEditorLibrary.generated.h"

class UInputRecordSave;

UCLASS(Blueprintable)
class ALTARQMP_API UAltarKeyInputReplayEditorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAltarKeyInputReplayEditorLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static UInputRecordSave* LoadAltarRecordData(const FString& SegmentName);
    
};

