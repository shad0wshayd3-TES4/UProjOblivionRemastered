#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Templates/SubclassOf.h"
#include "PawnSpatialIndexSubsystem.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API UPawnSpatialIndexSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> IndexedPawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, APawn*> OctreeIdPawns;
    
public:
    UPawnSpatialIndexSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdatePawnLocation(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void RemovePawn(const APawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(const AActor* ActorSpawned);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    void BlueprintGetPawnsInRadius(const FVector& SphereCenter, const double SphereRadius, UPARAM(Ref) TArray<APawn*>& OutPawns) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPawn(const APawn* Pawn);
    
};

