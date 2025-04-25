#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnItemPropertyDragDetectedDelegate.h"
#include "OnItemPropertySelectionChangedDelegate.h"
#include "AkItemProperties.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class AKAUDIO_API UAkItemProperties : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPropertySelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPropertyDragDetected OnPropertyDragged;
    
    UAkItemProperties();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FString GetSelectedProperty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

