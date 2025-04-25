#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VAssociatedAltarCellToPrePlacedActors.generated.h"

class UVInitializedPrePlacedActor;

UCLASS(Blueprintable)
class ALTAR_API UVAssociatedAltarCellToPrePlacedActors : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UVInitializedPrePlacedActor*> PrePlacedPairableActors;
    
    UVAssociatedAltarCellToPrePlacedActors();

};

