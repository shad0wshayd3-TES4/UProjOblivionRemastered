#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SteeringBehaviorsBlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API USteeringBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteeringBehaviorsBlueprintFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static double GetParallelPathMaxOffset2D(const TArray<FVector>& Path, const bool bLeftSide);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugPolyline(const UObject* WorldContextObject, const TArray<FVector>& Polyline, const FLinearColor PolylineColor, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintPure)
    static TArray<FVector> BuildParallelPath(const TArray<FVector>& Path, const double Offset2D, const double LayerHeight);
    
};

