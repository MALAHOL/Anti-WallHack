#pragma once

#include "SDK.h"
#include "AWH.h"

namespace Utils
{
	extern unsigned short int MaxClients;
	void Extrapolate(CBasePlayer* player, Vector& eye_pos, Vector& origin, Vector box[2]);
};

PLUGIN_GLOBALVARS();
