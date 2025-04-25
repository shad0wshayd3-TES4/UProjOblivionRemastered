#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VBaseCharacterAnimInstance.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBaseCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* PairedPawn;
    
public:
    UVBaseCharacterAnimInstance();

};

