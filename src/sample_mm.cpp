#include <stdio.h>
#include "headers/sample_mm.h"
#include "headers/Utils.h"
#include "headers/Offsets.h"

#define ENGINE_CALL(func) SH_CALL(Interface.engine, &IVEngineServer::func)

SH_DECL_MANUALHOOK2_void(SetTransmit, 24, 0, 0, CCheckTransmitInfo *, bool);
//SH_DECL_MANUALHOOK3_void(Weapon_Drop, 0, 0, 0, CBaseCombatWeapon *, const Vector *, const Vector *);
//SH_DECL_MANUALHOOK1_void(Weapon_Equip, 0, 0, 0, CBaseCombatWeapon *);

SH_DECL_HOOK1_void(IServerGameDLL, GameFrame, SH_NOATTRIB, 0, bool);
SH_DECL_HOOK2_void(IServerGameClients, ClientPutInServer, SH_NOATTRIB, 0, edict_t *, char const *);

UAC g_UAC;

Interfaces Interface;

ConVar sample_cvar("sample_cvar", "42", 0);

/** 
 * Something like this is needed to register cvars/CON_COMMANDs.
 */
class BaseAccessor : public IConCommandBaseAccessor
{
public:
	bool RegisterConCommandBase(ConCommandBase *pCommandBase)
	{
		/* Always call META_REGCVAR instead of going through the engine. */
		return META_REGCVAR(pCommandBase);
	}
} s_BaseAccessor;

PLUGIN_EXPOSE(UAC, g_UAC);
bool UAC::Load(PluginId id, ISmmAPI *ismm, char *error, size_t maxlen, bool late)
{
	PLUGIN_SAVEVARS();
	GET_V_IFACE_CURRENT(GetEngineFactory, Interface.engine, IVEngineServer, INTERFACEVERSION_VENGINESERVER);
	GET_V_IFACE_CURRENT(GetEngineFactory, Interface.gameevents, IGameEventManager2, INTERFACEVERSION_GAMEEVENTSMANAGER2);
	GET_V_IFACE_ANY(GetServerFactory, Interface.gameents, IServerGameEnts, INTERFACEVERSION_SERVERGAMEENTS);
	GET_V_IFACE_CURRENT(GetEngineFactory, Interface.helpers, IServerPluginHelpers, INTERFACEVERSION_ISERVERPLUGINHELPERS);
	GET_V_IFACE_CURRENT(GetEngineFactory, Interface.icvar, ICvar, CVAR_INTERFACE_VERSION);
	GET_V_IFACE_ANY(GetServerFactory, Interface.server, IServerGameDLL, INTERFACEVERSION_SERVERGAMEDLL);
	GET_V_IFACE_ANY(GetServerFactory, Interface.gameclients, IServerGameClients, INTERFACEVERSION_SERVERGAMECLIENTS);
	GET_V_IFACE_ANY(GetServerFactory, Interface.playerinfomanager, IPlayerInfoManager, INTERFACEVERSION_PLAYERINFOMANAGER);
	GET_V_IFACE_ANY(GetEngineFactory, Interface.trace, IEngineTrace, INTERFACEVERSION_ENGINETRACE_SERVER);

	Interface.gpGlobals = ismm->GetCGlobals();

	META_LOG(g_PLAPI, "Starting plugin.");

	/* Load the VSP listener.  This is usually needed for IServerPluginHelpers. */
	if ((Interface.vsp_callbacks = ismm->GetVSPInfo(NULL)) == NULL)
	{
		ismm->AddListener(this, this);
		ismm->EnableVSPListener();
	}
	SH_ADD_HOOK_MEMFUNC(IServerGameDLL, GameFrame, Interface.server, this, &UAC::Hook_GameFrame, true);
	SH_ADD_HOOK_MEMFUNC(IServerGameClients, ClientPutInServer, Interface.gameclients, this, &UAC::Hook_ClientPutInServer, true);
	ENGINE_CALL(LogPrint)("All hooks started!\n");
	
	g_pCVar = Interface.icvar;
	ConVar_Register(0, &s_BaseAccessor);
	
	Utils::MaxClients = Interface.gpGlobals->maxClients;
	/*
	AWH::visible = (bool**) malloc(Utils::MaxClients * sizeof(bool));
	for(int i = 0; i < Utils::MaxClients; ++i)
		AWH::visible[i] = (bool*) malloc(Utils::MaxClients * sizeof(bool));
	*/
	//Offsets::DumpNetvars();
	Offsets::GetOffsets();
	return true;
}

bool UAC::Unload(char *error, size_t maxlen)
{
	SH_REMOVE_HOOK_MEMFUNC(IServerGameDLL, GameFrame, Interface.server, this, &UAC::Hook_GameFrame, true);
	SH_REMOVE_HOOK_MEMFUNC(IServerGameClients, ClientPutInServer, Interface.gameclients, this, &UAC::Hook_ClientPutInServer, true);

	return true;
}

void UAC::OnVSPListening(IServerPluginCallbacks *iface)
{
	Interface.vsp_callbacks = iface;
}

void UAC::AllPluginsLoaded()
{
	/* This is where we'd do stuff that relies on the mod or other plugins 
	 * being initialized (for example, cvars added and events registered).
	 */
}

void UAC::Hook_GameFrame(bool simulating)
{
	/**
	 * simulating:
	 * ***********
	 * true  | game is ticking
	 * false | game is not ticking
	 */
}

void UAC::Hook_ClientPutInServer(edict_t *entity, char const *playername)
{
	CBaseEntity* player = Interface.gameents->EdictToBaseEntity(entity);
	int hookid = SH_ADD_MANUALHOOK(SetTransmit, player, SH_STATIC(AWH::Hook_SetTransmit), false);
}

bool UAC::Pause(char *error, size_t maxlen)
{
	return true;
}

bool UAC::Unpause(char *error, size_t maxlen)
{
	return true;
}

const char* UAC::GetLicense()
{
	return "NOTHING";
}

const char* UAC::GetVersion()
{
	return "1.3.3.7";
}

const char* UAC::GetDate()
{
	return __DATE__;
}

const char *UAC::GetLogTag()
{
	return "UAC";
}

const char* UAC::GetAuthor()
{
	return "";
}

const char* UAC::GetDescription()
{
	return "Trying to protect your server from hackers";
}

const char* UAC::GetName()
{
	return "";
}

const char* UAC::GetURL()
{
	return "";
}
