#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "NavMeshLandmarkType.h"
#include "NavigationDataLandmarkMetaClusters.h"
#include "NavMeshLandmarkMetaClustersSubsystem.generated.h"

class AActor;
class ANavigationData;

UCLASS(Blueprintable)
class ALTAR_API UNavMeshLandmarkMetaClustersSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavMeshLandmarkType> NavMeshLandmarkTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationDataLandmarkMetaClusters> NavigationDataLandmarkMetaClustersCollection;
    
public:
    UNavMeshLandmarkMetaClustersSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnNavDataRegistered(const ANavigationData* NavData);
    
    UFUNCTION(BlueprintCallable)
    void OnLandmarkActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

