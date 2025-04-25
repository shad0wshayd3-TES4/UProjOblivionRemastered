#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VPhysicsDebugPanel.generated.h"

class UArrowComponent;
class USceneComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPhysicsDebugPanel : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AnchorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* TargetArrowComponent;
    
    AVPhysicsDebugPanel(const FObjectInitializer& ObjectInitializer);

};

