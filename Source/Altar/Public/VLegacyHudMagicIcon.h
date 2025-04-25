#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "VAltarButton.h"
#include "VLegacyHudMagicIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyHudMagicIcon : public UVAltarButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MagicBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanCast;
    
public:
    UVLegacyHudMagicIcon();

    UFUNCTION(BlueprintCallable)
    void SetMagicTexture(UTexture2D* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMagicBrush(const FSlateBrush& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCast(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagicBrushUpdated(const FSlateBrush& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanCastUpdated(bool Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetMagicBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanCast() const;
    
};

