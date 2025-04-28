#include "TESSyncFactory.h"
#include "TESSync.h"

UTESSyncFactory::UTESSyncFactory()
{
    SupportedClass = UTESSync::StaticClass();
    bCreateNew = true;
}

UObject* UTESSyncFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UTESSync>(InParent, Class, Name, Flags, Context);
}
