#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EEmitFrom.h"
#include "EVelocityType.h"
#include "NiPSysEmitter.h"
#include "NiPSysMeshEmitter.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysMeshEmitter : public UNiPSysEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumEmitterMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiAvObject*> EmitterMeshes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVelocityType InitialVelocityType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmitFrom EmissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EmissionAxis;
    
    UNiPSysMeshEmitter();

};

