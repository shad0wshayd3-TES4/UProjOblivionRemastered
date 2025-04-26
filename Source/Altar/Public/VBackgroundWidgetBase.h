#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActivatableWidget -FallbackName=CommonActivatableWidget
#include "CommonActivatableWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BackgroundChangedDelegateDelegate.h"
#include "VBackgroundWidgetBase.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVBackgroundWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundChangedDelegate OnBackgroundChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundImageBrush;
    
public:
    UVBackgroundWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetBackgroundImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    void RequestCapture();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnScreenShotcapturedDelegate(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBackgroundImageBrush() const;
    
};

