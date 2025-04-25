#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonButtonBase -FallbackName=CommonButtonBase
#include "BasicUINavigation.h"
#include "NavigationUIElement.h"
#include "NavigationButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UNavigationButton : public UCommonButtonBase, public INavigationUIElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicUINavigation BasicUINavigation;
    
public:
    UNavigationButton();


    // Fix for true pure virtual functions not being implemented
};

