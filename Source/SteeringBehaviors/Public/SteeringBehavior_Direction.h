#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SteeringBehavior.h"
#include "SteeringBehavior_Direction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEERINGBEHAVIORS_API USteeringBehavior_Direction : public USteeringBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxInterest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinInterest;
    
public:
    USteeringBehavior_Direction();

    UFUNCTION(BlueprintCallable)
    void SetDirection(const FVector& NewDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirection() const;
    
};

