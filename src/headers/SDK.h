#pragma once

#include <ISmmPlugin.h>
#include <IEngineTrace.h>
#include <igameevents.h>
#include <iplayerinfo.h>
#include <sh_vector.h>
#include "SDK/definitions.h"
#include "SDK/IClientEntity.h"
#include "SDK/CPlayerResource.h"

struct Interfaces
{
	IServerGameDLL *server;
	IServerGameClients *gameclients;
	IServerGameEnts *gameents;
	IVEngineServer *engine;
	IServerPluginHelpers *helpers;
	IGameEventManager2 *gameevents;
	IServerPluginCallbacks *vsp_callbacks;
	IPlayerInfoManager *playerinfomanager;
	ICvar *icvar;
	CGlobalVars *gpGlobals;
	IEngineTrace *trace;
};

extern struct Interfaces Interface;
