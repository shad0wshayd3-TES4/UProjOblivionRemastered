#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "UVAltarUserInputTextSubsystem.generated.h"

class UUserInputTextSaveData;

UCLASS(Blueprintable)
class ALTAR_API UUVAltarUserInputTextSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserInputTextSaveData* UserInputTextSaveData;
    
public:
    UUVAltarUserInputTextSubsystem();

};

