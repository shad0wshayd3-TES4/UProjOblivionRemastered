#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VActorBehaviorCollection.generated.h"

class UVActorBehaviorBase;

UCLASS(Blueprintable)
class ALTAR_API UVActorBehaviorCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVActorBehaviorBase*> Behaviors;
    
    UVActorBehaviorCollection();

};

