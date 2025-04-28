#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "VModdableBlueprintGeneratedClassFactory.generated.h"

UCLASS()
class UVModdableBlueprintGeneratedClassFactory : public UFactory
{
    GENERATED_BODY()
public:
    UVModdableBlueprintGeneratedClassFactory();
    UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
