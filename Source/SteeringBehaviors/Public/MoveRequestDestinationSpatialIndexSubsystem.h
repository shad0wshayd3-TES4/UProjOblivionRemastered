#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "MoveRequestDestinationData.h"
#include "MoveRequestDestinationSpatialIndexSubsystem.generated.h"

class AAIController;
class AActor;

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API UMoveRequestDestinationSpatialIndexSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMoveRequestDestinationData> OctreeIdMoveRequestDestinations;
    
public:
    UMoveRequestDestinationSpatialIndexSubsystem();

    UFUNCTION(BlueprintCallable)
    void RegisterMoveRequestDestination(const AAIController* AIController, const FAIRequestID& MoveRequestId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControllerEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    void GetMoveRequestDestinationsInRadius(const FVector& SphereCenter, const double SphereRadius, UPARAM(Ref) TArray<FMoveRequestDestinationData>& MoveRequestDestinations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAIRequestID GetCurrentMoveRequestId(const AAIController* AIController);
    
};

