#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "NavigationListviewEntry.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UNavigationListviewEntry : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectable;
    
public:
    UNavigationListviewEntry();

    UFUNCTION(BlueprintCallable)
    void SetItemObject(UObject* Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsListItemSelectable() const;
    

    // Fix for true pure virtual functions not being implemented
};

