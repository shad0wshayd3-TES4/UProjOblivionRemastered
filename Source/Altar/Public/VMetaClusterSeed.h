#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VMetaClusterSeed.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ALTAR_API AVMetaClusterSeed : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AVMetaClusterSeed(const FObjectInitializer& ObjectInitializer);

};

