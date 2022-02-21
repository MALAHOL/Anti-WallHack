#include "headers/Utils.h"

COffsets offsets;

unsigned short int Utils::MaxClients = 0;

void Utils::Extrapolate(CBasePlayer* player, Vector& eye_pos, Vector& origin, Vector box[2])
{
	IPlayerInfo* info = Interface.playerinfomanager->GetPlayerInfo(Interface.gameents->BaseEntityToEdict(player));
	if(info->IsFakeClient())
		return;
		
	Vector velocity = player->GetVelocity() * (Interface.gpGlobals->tickcount - player->GetTickBase()) * Interface.gpGlobals->interval_per_tick;
	if(velocity.x != 0 && velocity.y != 0)
	{
		Ray_t ray;
		trace_t tr;
		CTraceFilterWorldOnly filter;
		ray.Init(origin, origin * velocity, player->GetCollideable()->OBBMins(), player->GetCollideable()->OBBMaxs());
		Interface.trace->TraceRay(ray, MASK_VISIBLE, &filter, &tr);
		
		if(!tr.DidHit())
		{
			eye_pos *= velocity;
			origin *= velocity;
		}
		velocity *= 0.01;
		
		if (velocity.x > 1.0)
		{
			box[0].x *= velocity.x;
			box[1].x *= velocity.x;
		}
		if (velocity.y > 1.0)
		{
			box[0].y *= velocity.y;
			box[1].y *= velocity.y;
		}
		if (velocity.z > 1.0)
		{
			box[0].z *= velocity.z;
			box[1].z *= velocity.z;
		}
	}
}


