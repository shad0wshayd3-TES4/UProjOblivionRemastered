#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VOblivionActivableAnimInstance.generated.h"

class UVAnimationObjectPairingComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVOblivionActivableAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAnimationObjectPairingComponent* LinkedAnimationObjectPairingComponent;
    
public:
    UVOblivionActivableAnimInstance();

};

