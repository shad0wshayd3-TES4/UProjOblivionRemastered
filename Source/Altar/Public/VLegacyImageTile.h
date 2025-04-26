#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "VLegacyImageTile.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyImageTile : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StretchImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Crop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
public:
    UVLegacyImageTile();

    UFUNCTION(BlueprintCallable)
    void SetStretchImage(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCrop(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStretchImageUpdated(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCropUpdated(FVector2D Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrushUpdated(const FSlateBrush& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStretchImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCrop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBrush() const;
    
};

