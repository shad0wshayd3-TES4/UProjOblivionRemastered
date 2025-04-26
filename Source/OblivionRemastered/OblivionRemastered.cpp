// Copyright Epic Games, Inc. All Rights Reserved.

#include "OblivionRemastered.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, OblivionRemastered, "OblivionRemastered" );


class FOblivionRemasteredModule : public FDefaultGameModuleImpl
{
public:
    virtual bool IsGameModule() const override
    {
        return true;
    }
};
