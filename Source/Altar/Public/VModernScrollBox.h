#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "ScrollboxScrollbarUpdatedDelegate.h"
#include "VModernScrollBox.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollboxScrollbarUpdated OnScrollboxScrollbarChanged;
    
    UVModernScrollBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnScrollboxScrollbarChangedInternal(float MinScrollbarValue, float MaxScrollbarValue, float CurrentScrollbarValue, float ThumbFractionSize);
    
};

