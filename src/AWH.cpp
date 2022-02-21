#include "headers/AWH.h"

namespace AWH
{
	void Hook_SetTransmit(CCheckTransmitInfo *pInfo, bool bAlways)
	{
		CBasePlayer* client = META_IFACEPTR(CBasePlayer);
		CBasePlayer* enemy = (CBasePlayer*) pInfo->m_pClientEnt->GetUnknown()->GetBaseEntity();
			
		if(!enemy || client == enemy || !enemy->GetAlive())
			RETURN_META(MRES_IGNORED);
		
		if(client->GetAlive())
		{
			Vector start[] = {
				client->GetVecOrigin(),
				enemy->GetVecOrigin()
			};
			Vector box[] = {
				client->GetCollideable()->OBBMins(),
				client->GetCollideable()->OBBMaxs(),
				enemy->GetCollideable()->OBBMins(),
				enemy->GetCollideable()->OBBMaxs()
			};
			Vector eye[] = {
				client->GetEyePosition(),
				enemy->GetEyePosition()
			};
			Utils::Extrapolate(client, start[0], eye[0], box);
			Utils::Extrapolate(enemy, start[1], eye[1], &box[2]);
			
			if(IsPointVisible(eye[0], eye[1]) || IsPointVisible(eye[0], start[1]))
				RETURN_META(MRES_IGNORED);
			if(IsAroundCorner(start[0], start[1]) || IsAroundCorner(start[1], start[0]))
				RETURN_META(MRES_IGNORED);
			//if(IsFwdVecVisible(start[0], *enemy->GetEyeAngles(), start[1]))
			//	RETURN_META(MRES_IGNORED);
			if(IsBoxVisible(start[0], box[2] + start[1], box[3] + start[1]))
				RETURN_META(MRES_IGNORED);
			RETURN_META(MRES_SUPERCEDE);
		}
		else
		{
			// Observer
			// TODO: Do this!!!
			RETURN_META(MRES_IGNORED);
		}
		RETURN_META(MRES_SUPERCEDE);
	}

	void Hook_SetTransmitWeapon(CCheckTransmitInfo *pInfo, bool bAlways)
	{
		
	}

	inline const bool IsPointVisible(const Vector& start, const Vector& end)
	{
		Ray_t ray;
		trace_t tr;
		CTraceFilterWorldOnly filter;
		
		ray.Init(start, end);
		Interface.trace->TraceRay(ray, MASK_VISIBLE, &filter, &tr);
		
		if(!tr.DidHit())
			return true;
		return false;
	}
	const bool IsAroundCorner(const Vector& start, const Vector& end)
	{
		Vector point_0 = {
			end.x, start.y, start.z
		};
		
		if(AWH::IsPointVisible(end, point_0))
			return false;
		
		Vector point_1 = start - point_0;
		float length = point_1.Length();
		point_1 *= 0.35f;
		point_1 = start - point_1;
		
		if(AWH::IsPointVisible(point_1, end))
			return true;
		else
		{
			if(point_0.DistTo(start) > 100.f)
				return false;
			else
				return true;
		}
	}
	/*
	const bool IsFwdVecVisible(const Vector& start, const QAngle& angles, const Vector& end)
	{
		Vector fwd;
		
		AngleVectors(angles, &fwd);
		fwd *= 60.f;
		fwd += end;
		
		return IsPointVisible(start, fwd);
	}
	*/
	const bool IsBoxVisible(const Vector& start, const Vector& mins, const Vector& maxs)
	{
		const Vector box[] = {
			Vector( mins.x, mins.y, mins.z ),
			Vector( mins.x, maxs.y, mins.z ),
			Vector( maxs.x, maxs.y, mins.z ),
			Vector( maxs.x, mins.y, mins.z ),
			Vector( maxs.x, maxs.y, maxs.z ),
			Vector( mins.x, maxs.y, maxs.z ),
			Vector( mins.x, mins.y, maxs.z ),
			Vector( maxs.x, mins.y, maxs.z )
		};
		
		for(int i = 0; i < 8; ++i)
			if (IsPointVisible(start, box[i]))
				return true;
		return false;
	}
}
