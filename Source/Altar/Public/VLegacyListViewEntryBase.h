#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonUserWidget -FallbackName=CommonUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "Blueprint/IUserObjectListEntry.h"
#include "CommonUserWidget.h"

#include "VLegacyListViewEntryBase.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyListViewEntryBase : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UVLegacyListViewEntryBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemObjectSet(UObject* ListItemObject);
    

    // Fix for true pure virtual functions not being implemented
};

