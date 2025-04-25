#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "StainedGlassSubsystem.generated.h"

class AStainedGlassCapturer;

UCLASS(Blueprintable)
class ALTAR_API UStainedGlassSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStainedGlassCapturer*> CapturerArray;
    
public:
    UStainedGlassSubsystem();

};

