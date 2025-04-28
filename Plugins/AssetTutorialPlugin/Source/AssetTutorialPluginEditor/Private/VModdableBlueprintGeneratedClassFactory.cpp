#include "VModdableBlueprintGeneratedClassFactory.h"
#include "VModdableBlueprintGeneratedClass.h"

UVModdableBlueprintGeneratedClassFactory::UVModdableBlueprintGeneratedClassFactory()
{
    SupportedClass = UVModdableBlueprintGeneratedClassFactory::StaticClass();
    bCreateNew = true;
}

UObject* UVModdableBlueprintGeneratedClassFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UVModdableBlueprintGeneratedClassFactory>(InParent, Class, Name, Flags, Context);
}
