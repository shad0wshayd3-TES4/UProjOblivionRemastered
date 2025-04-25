#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SteeringBehaviorContextConfiguration.h"
#include "SteeringBehavior.generated.h"

class USteeringBehaviorsComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteeringBehaviorContextConfiguration ContextConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    USteeringBehavior();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USteeringBehaviorsComponent* GetSteeringBehaviorsComponent() const;
    
};

