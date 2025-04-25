#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
#include "ELegacyXboxFloatingHintButton.h"
#include "VAltarWidget.h"
#include "VLegacyXboxFloatingHint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyXboxFloatingHint : public UVAltarWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyXboxFloatingHintButton ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
public:
    UVLegacyXboxFloatingHint();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(const ECommonInputType InputType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonIcon(const ELegacyXboxFloatingHintButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCropForIcon() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyXboxFloatingHintButton GetButtonIcon() const;
    
};

