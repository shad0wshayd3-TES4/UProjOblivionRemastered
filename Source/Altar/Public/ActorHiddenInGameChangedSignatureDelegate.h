#pragma once
#include "CoreMinimal.h"
#include "ActorHiddenInGameChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorHiddenInGameChangedSignatureUObject*, EnterPropertyName, bool, bHidden);

