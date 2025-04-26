#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ExpandableArea -FallbackName=ExpandableArea
#include "Components/ExpandableArea.h"

#include "BasicUINavigation.h"
#include "NavigationUIElement.h"
#include "NavigationExpandableArea.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNavigationExpandableArea : public UExpandableArea, public INavigationUIElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicUINavigation BasicUINavigation;
    
public:
    UNavigationExpandableArea();


    // Fix for true pure virtual functions not being implemented
};

