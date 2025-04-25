#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnAnimatedActionEventDelegateDelegate.generated.h"

class UAnimNotifyActionEventInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimatedActionEventDelegate, FGameplayTag, EventTag, const UAnimNotifyActionEventInfo*, EventSource);

