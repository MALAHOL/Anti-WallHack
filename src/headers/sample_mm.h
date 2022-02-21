/**
 * vim: set ts=4 sw=4 tw=99 noet :
 * ======================================================
 * Metamod:Source Sample Plugin
 * Written by AlliedModders LLC.
 * ======================================================
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from 
 * the use of this software.
 *
 * This sample plugin is public domain.
 */

#pragma once

#ifndef _INCLUDE_METAMOD_SOURCE_STUB_PLUGIN_H_
#define _INCLUDE_METAMOD_SOURCE_STUB_PLUGIN_H_

#include "SDK.h"

#if defined WIN32 && !defined snprintf
#define snprintf _snprintf
#endif

class UAC : public ISmmPlugin, public IMetamodListener
{
	public:
		bool Load(PluginId id, ISmmAPI *ismm, char *error, size_t maxlen, bool late);
		bool Unload(char *error, size_t maxlen);
		bool Pause(char *error, size_t maxlen);
		bool Unpause(char *error, size_t maxlen);
		void AllPluginsLoaded();
	public: //IMetamodListener stuff
		void OnVSPListening(IServerPluginCallbacks *iface);
	public: //hooks
		void Hook_GameFrame(bool simulating);
		void Hook_ClientPutInServer(edict_t *entity, char const *playername);
	public:
		const char *GetAuthor();
		const char *GetName();
		const char *GetDescription();
		const char *GetURL();
		const char *GetLicense();
		const char *GetVersion();
		const char *GetDate();
		const char *GetLogTag();
};

extern UAC g_UAC;

PLUGIN_GLOBALVARS();

#include "AWH.h"
#include "Utils.h"

#endif //_INCLUDE_METAMOD_SOURCE_STUB_PLUGIN_H_

#ifndef _INCLUDE_SOURCE_ENGINE_WRAPPERS_
#define _INCLUDE_SOURCE_ENGINE_WRAPPERS_

#if SOURCE_ENGINE <= SE_DARKMESSIAH
/**
 * Wrap the CCommand class so our code looks the same on all engines.
 */
class CCommand
{
public:
	const char *ArgS()
	{
		return Interface.engine->Cmd_Args();
	}
	int ArgC()
	{
		return Interface.engine->Cmd_Argc();
	}

	const char *Arg(int index)
	{
		return Interface.engine->Cmd_Argv(index);
	}
};

#define CVAR_INTERFACE_VERSION VENGINE_CVAR_INTERFACE_VERSION
#endif

/**
 * Left 4 Dead engine removed these from IVEngineServer.
 */
#if SOURCE_ENGINE >= SE_LEFT4DEAD

inline int IndexOfEdict(const edict_t *pEdict)
{
	return (int)(pEdict - Interface.gpGlobals->pEdicts);
}
inline edict_t *PEntityOfEntIndex(int iEntIndex)
{
	if (iEntIndex >= 0 && iEntIndex < Interface.gpGlobals->maxEntities)
	{
		return (edict_t *)(Interface.gpGlobals->pEdicts + iEntIndex);
	}
	return NULL;
}

#else

inline int IndexOfEdict(const edict_t *pEdict)
{
	return Interface.engine->IndexOfEdict(pEdict);
}
inline edict_t *PEntityOfEntIndex(int iEntIndex)
{
	return Interface.engine->PEntityOfEntIndex(iEntIndex);
}

#endif

#endif //_INCLUDE_SOURCE_ENGINE_WRAPPERS_
