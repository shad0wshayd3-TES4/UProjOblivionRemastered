#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VActorBehaviorMap.generated.h"

class UVActorBehaviorBase;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ALTAR_API UVActorBehaviorMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UVActorBehaviorBase*> TagToBehaviorMap;
    
public:
    UVActorBehaviorMap();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVActorBehaviorBase* GetBehaviorForTag(FGameplayTag Tag) const;
    
};

