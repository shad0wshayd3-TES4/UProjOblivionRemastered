#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EVCharacterParameterType.h"
#include "EVSenescenceModifiers.h"
#include "VCharacterSkinParameterModifier.h"
#include "VCharacterSkinParameter.generated.h"

USTRUCT(BlueprintType)
struct FVCharacterSkinParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimitiveSlot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVCharacterParameterType ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColorL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfSucessiveSlots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVSenescenceModifiers, FVCharacterSkinParameterModifier> Modifiers;
    
    ALTAR_API FVCharacterSkinParameter();
};

