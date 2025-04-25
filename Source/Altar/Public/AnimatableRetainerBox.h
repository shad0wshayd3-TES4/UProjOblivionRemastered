#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RetainerBox -FallbackName=RetainerBox
#include "AnimatableRetainerBox.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UAnimatableRetainerBox : public URetainerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UAnimatableRetainerBox();

};

