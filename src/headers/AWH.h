#pragma once

#include "SDK.h"
#include "Utils.h"

namespace AWH
{
	//extern bool** visible;
	void Hook_SetTransmit(CCheckTransmitInfo *pInfo, bool bAlways);
	void Hook_SetTransmitWeapon(CCheckTransmitInfo *pInfo, bool bAlways);
	void Hook(CBaseEntity* player);
	inline const bool IsPointVisible(const Vector& start, const Vector& end);
	const bool IsAroundCorner(const Vector& start, const Vector& end);
	//const bool IsFwdVecVisible(const Vector& start, const QAngle& angles, const Vector& end);
	const bool IsBoxVisible(const Vector& start, const Vector& mins, const Vector& maxs);
};

PLUGIN_GLOBALVARS();
