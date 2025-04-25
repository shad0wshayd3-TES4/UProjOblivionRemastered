#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AkWwiseObjectDetails.h"
#include "OnItemDragDetectedDelegate.h"
#include "OnItemSelectionChangedDelegate.h"
#include "AkWwiseTree.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTree : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDragDetected OnItemDragged;
    
    UAkWwiseTree();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FAkWwiseObjectDetails GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

