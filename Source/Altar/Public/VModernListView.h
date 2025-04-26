#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonListView -FallbackName=CommonListView
#include "CommonListView.h"

#include "ListViewScrollbarUpdatedDelegate.h"
#include "VModernListView.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernListView : public UCommonListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListViewScrollbarUpdated OnListViewScrollbarChanged;
    
    UVModernListView(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnListViewScrollbarChangedInternal(float MinScrollbarValue, float MaxScrollbarValue, float CurrentScrollbarValue, float ThumbFractionSize);
    
};

