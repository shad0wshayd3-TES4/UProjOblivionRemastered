#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VLevelSelectDispatcher.generated.h"

class AVLevelSelectDoor;
class UChildActorComponent;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class ALTAR_API AVLevelSelectDispatcher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DoorBaseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetBetweenDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<UChildActorComponent*> DoorsChildActors;
    
    AVLevelSelectDispatcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UWorld* StartPairedGameManually(UObject* WorldContext, const FString& LevelName, const FString& StartupCommand, bool bUseDebugGamemode);
    
    UFUNCTION(BlueprintCallable)
    static UWorld* StartPairedGame(AVLevelSelectDoor* Door);
    
};

