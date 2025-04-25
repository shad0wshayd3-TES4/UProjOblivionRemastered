#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VOblivionCreatureAnimInstance.generated.h"

class UVAnimationPairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVOblivionCreatureAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationPairingComponent* LinkedAnimationPairingComponent;
    
public:
    UVOblivionCreatureAnimInstance();

};

