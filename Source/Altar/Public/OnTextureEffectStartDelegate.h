#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "OnTextureEffectStartDelegate.generated.h"

class UStaticMeshComponent;
class UTESEffectShader;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTextureEffectStart, UTESEffectShader*, form, const TArray<FLinearColor>&, VFXColors, const TArray<UStaticMeshComponent*>&, MeshIgnoreList, float, StatusEffectValue);

