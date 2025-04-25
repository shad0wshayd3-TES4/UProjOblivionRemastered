#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "VAssetNameDebugWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAssetNameDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    UVAssetNameDebugWidget();

    UFUNCTION(BlueprintCallable)
    void TraceToFirstAsset();
    
};

