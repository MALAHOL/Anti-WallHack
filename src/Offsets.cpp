#include "headers/Offsets.h"
#include "headers/SDK.h"

void Offsets::GetOffsets()
{
	Tables* tables = Offsets::GetTables();
	if(!tables)
		exit(-1);
	
	offsets.DT_BasePlayer.m_Local = Offsets::GetOffset(tables, "DT_BasePlayer", "m_Local");
	offsets.DT_BasePlayer.m_aimPunchAngle = Offsets::GetOffset(tables, "DT_BasePlayer", "m_aimPunchAngle");
	offsets.DT_BasePlayer.m_viewPunchAngle = Offsets::GetOffset(tables, "DT_BasePlayer", "m_viewPunchAngle");
	offsets.DT_BasePlayer.m_vecViewOffset = Offsets::GetOffset(tables, "DT_BasePlayer", "m_vecViewOffset[0]");
	offsets.DT_BasePlayer.m_nTickBase = Offsets::GetOffset(tables, "DT_BasePlayer", "m_nTickBase");
	offsets.DT_BasePlayer.m_vecVelocity = Offsets::GetOffset(tables, "DT_BasePlayer", "m_vecVelocity[0]");
	offsets.DT_BasePlayer.m_iHealth = Offsets::GetOffset(tables, "DT_BasePlayer", "m_iHealth");
	offsets.DT_BasePlayer.m_lifeState = Offsets::GetOffset(tables, "DT_BasePlayer", "m_lifeState");
	offsets.DT_BasePlayer.m_fFlags = Offsets::GetOffset(tables, "DT_BasePlayer", "m_fFlags");
	offsets.DT_BasePlayer.m_iObserverMode = Offsets::GetOffset(tables, "DT_BasePlayer", "m_iObserverMode");
	offsets.DT_BasePlayer.m_hObserverTarget = Offsets::GetOffset(tables, "DT_BasePlayer", "m_hObserverTarget");
	offsets.DT_BasePlayer.m_hViewModel = Offsets::GetOffset(tables, "DT_BasePlayer", "m_hViewModel[0]");
	offsets.DT_BasePlayer.m_szLastPlaceName = Offsets::GetOffset(tables, "DT_BasePlayer", "m_szLastPlaceName");
	offsets.DT_BasePlayer.deadflag = Offsets::GetOffset(tables, "DT_BasePlayer", "deadflag");

	offsets.DT_BaseEntity.m_flAnimTime = Offsets::GetOffset(tables, "DT_BaseEntity", "m_flAnimTime");
	offsets.DT_BaseEntity.m_flSimulationTime = Offsets::GetOffset(tables, "DT_BaseEntity", "m_flSimulationTime");
	offsets.DT_BaseEntity.m_vecOrigin = Offsets::GetOffset(tables, "DT_BaseEntity", "m_vecOrigin");
	offsets.DT_BaseEntity.m_nRenderMode = Offsets::GetOffset(tables, "DT_BaseEntity", "m_nRenderMode");
	offsets.DT_BaseEntity.m_iTeamNum = Offsets::GetOffset(tables, "DT_BaseEntity", "m_iTeamNum");
	offsets.DT_BaseEntity.m_MoveType = offsets.DT_BaseEntity.m_nRenderMode + 1;
	offsets.DT_BaseEntity.m_Collision = Offsets::GetOffset(tables, "DT_BaseEntity", "m_Collision");
	offsets.DT_BaseEntity.m_bSpotted = Offsets::GetOffset(tables, "DT_BaseEntity", "m_bSpotted");

	offsets.DT_BaseCombatCharacter.m_hActiveWeapon = Offsets::GetOffset(tables, "DT_BaseCombatCharacter", "m_hActiveWeapon");
	offsets.DT_BaseCombatCharacter.m_hMyWeapons = Offsets::GetOffset(tables, "DT_BaseCombatCharacter", "m_hMyWeapons") / 2;
	offsets.DT_BaseCombatCharacter.m_hMyWearables = Offsets::GetOffset(tables, "DT_BaseCombatCharacter", "m_hMyWearables");

	offsets.DT_PlayerResource.m_iPing = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iPing");
	offsets.DT_PlayerResource.m_iKills = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iKills");
	offsets.DT_PlayerResource.m_iAssists = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iAssists");
	offsets.DT_PlayerResource.m_iDeaths = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iDeaths");
	offsets.DT_PlayerResource.m_bConnected = Offsets::GetOffset(tables, "DT_PlayerResource", "m_bConnected");
	offsets.DT_PlayerResource.m_iTeam = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iTeam");
	offsets.DT_PlayerResource.m_iPendingTeam = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iPendingTeam");
	offsets.DT_PlayerResource.m_bAlive = Offsets::GetOffset(tables, "DT_PlayerResource", "m_bAlive");
	offsets.DT_PlayerResource.m_iHealth = Offsets::GetOffset(tables, "DT_PlayerResource", "m_iHealth");

	offsets.DT_CSPlayerResource.m_iPlayerC4 = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iPlayerC4");
	offsets.DT_CSPlayerResource.m_iPlayerVIP = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iPlayerVIP");
	offsets.DT_CSPlayerResource.m_bHostageAlive = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_bHostageAlive");
	offsets.DT_CSPlayerResource.m_isHostageFollowingSomeone = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_isHostageFollowingSomeone");
	offsets.DT_CSPlayerResource.m_iHostageEntityIDs = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iHostageEntityIDs");
	offsets.DT_CSPlayerResource.m_bombsiteCenterB = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_bombsiteCenterB");
	offsets.DT_CSPlayerResource.m_hostageRescueX = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_hostageRescueX");
	offsets.DT_CSPlayerResource.m_hostageRescueY = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_hostageRescueY");
	offsets.DT_CSPlayerResource.m_hostageRescueZ = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_hostageRescueZ");
	offsets.DT_CSPlayerResource.m_iMVPs = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iMVPs");
	offsets.DT_CSPlayerResource.m_iArmor = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iArmor");
	offsets.DT_CSPlayerResource.m_bHasHelmet = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_bHasHelmet");
	offsets.DT_CSPlayerResource.m_bHasDefuser = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_bHasDefuser");
	offsets.DT_CSPlayerResource.m_iScore = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iScore");
	offsets.DT_CSPlayerResource.m_iCompetitiveRanking = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iCompetitiveRanking");
	offsets.DT_CSPlayerResource.m_iCompetitiveWins = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iCompetitiveWins");
	offsets.DT_CSPlayerResource.m_iCompTeammateColor = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iCompTeammateColor");
	offsets.DT_CSPlayerResource.m_bControllingBot = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_bControllingBot");
	offsets.DT_CSPlayerResource.m_iControlledPlayer = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iControlledPlayer");
	offsets.DT_CSPlayerResource.m_iControlledByPlayer = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iControlledByPlayer");
	offsets.DT_CSPlayerResource.m_iBotDifficulty = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iBotDifficulty");
	offsets.DT_CSPlayerResource.m_szClan = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_szClan");
	offsets.DT_CSPlayerResource.m_iTotalCashSpent = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iTotalCashSpent");
	offsets.DT_CSPlayerResource.m_iCashSpentThisRound = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_iCashSpentThisRound");
	offsets.DT_CSPlayerResource.m_nEndMatchNextMapVotes = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nEndMatchNextMapVotes");
	offsets.DT_CSPlayerResource.m_bEndMatchNextMapAllVoted = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_bEndMatchNextMapAllVoted");
	offsets.DT_CSPlayerResource.m_nActiveCoinRank = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nActiveCoinRank");
	offsets.DT_CSPlayerResource.m_nMusicID = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nMusicID");
	offsets.DT_CSPlayerResource.m_nPersonaDataPublicLevel = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nPersonaDataPublicLevel");
	offsets.DT_CSPlayerResource.m_nPersonaDataPublicCommendsLeader = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nPersonaDataPublicCommendsLeader");
	offsets.DT_CSPlayerResource.m_nPersonaDataPublicCommendsTeacher = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nPersonaDataPublicCommendsTeacher");
	offsets.DT_CSPlayerResource.m_nPersonaDataPublicCommendsFriendly = Offsets::GetOffset(tables, "DT_CSPlayerResource", "m_nPersonaDataPublicCommendsFriendly");

	offsets.DT_PlantedC4.m_bBombTicking = Offsets::GetOffset(tables, "DT_PlantedC4", "m_bBombTicking");
	offsets.DT_PlantedC4.m_flC4Blow = Offsets::GetOffset(tables, "DT_PlantedC4", "m_flC4Blow");
	offsets.DT_PlantedC4.m_bBombDefused = Offsets::GetOffset(tables, "DT_PlantedC4", "m_bBombDefused");
	offsets.DT_PlantedC4.m_hBombDefuser = Offsets::GetOffset(tables, "DT_PlantedC4", "m_hBombDefuser");

	offsets.DT_CSPlayer.m_iShotsFired = Offsets::GetOffset(tables, "DT_CSPlayer", "m_iShotsFired");
	offsets.DT_CSPlayer.m_angEyeAngles[0] = Offsets::GetOffset(tables, "DT_CSPlayer", "m_angEyeAngles[0]");
	offsets.DT_CSPlayer.m_angEyeAngles[1] = Offsets::GetOffset(tables, "DT_CSPlayer", "m_angEyeAngles[1]");
	offsets.DT_CSPlayer.m_iAccount = Offsets::GetOffset(tables, "DT_CSPlayer", "m_iAccount");
	offsets.DT_CSPlayer.m_totalHitsOnServer = Offsets::GetOffset(tables, "DT_CSPlayer", "m_totalHitsOnServer");
	offsets.DT_CSPlayer.m_ArmorValue = Offsets::GetOffset(tables, "DT_CSPlayer", "m_ArmorValue");
	offsets.DT_CSPlayer.m_bIsDefusing = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bIsDefusing");
	offsets.DT_CSPlayer.m_bIsGrabbingHostage = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bIsGrabbingHostage");
	offsets.DT_CSPlayer.m_bIsScoped = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bIsScoped");
	offsets.DT_CSPlayer.m_bGunGameImmunity = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bGunGameImmunity");
	offsets.DT_CSPlayer.m_bIsRescuing = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bIsRescuing");
	offsets.DT_CSPlayer.m_bHasHelmet = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bHasHelmet");
	offsets.DT_CSPlayer.m_bHasDefuser = Offsets::GetOffset(tables, "DT_CSPlayer", "m_bHasDefuser");
	offsets.DT_CSPlayer.m_flFlashDuration = Offsets::GetOffset(tables, "DT_CSPlayer", "m_flFlashDuration");
	offsets.DT_CSPlayer.m_flFlashMaxAlpha = Offsets::GetOffset(tables, "DT_CSPlayer", "m_flFlashMaxAlpha");
	offsets.DT_CSPlayer.m_flLowerBodyYawTarget = Offsets::GetOffset(tables, "DT_CSPlayer", "m_flLowerBodyYawTarget");

	offsets.DT_BaseAttributableItem.m_iItemDefinitionIndex = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_iItemDefinitionIndex");
	offsets.DT_BaseAttributableItem.m_iItemIDHigh = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_iItemIDHigh");
	offsets.DT_BaseAttributableItem.m_iAccountID = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_iAccountID");
	offsets.DT_BaseAttributableItem.m_iEntityQuality = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_iEntityQuality");
	offsets.DT_BaseAttributableItem.m_szCustomName = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_szCustomName");
	offsets.DT_BaseAttributableItem.m_nFallbackPaintKit = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_nFallbackPaintKit");
	offsets.DT_BaseAttributableItem.m_nFallbackSeed = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_nFallbackSeed");
	offsets.DT_BaseAttributableItem.m_flFallbackWear = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_flFallbackWear");
	offsets.DT_BaseAttributableItem.m_nFallbackStatTrak = Offsets::GetOffset(tables, "DT_BaseAttributableItem", "m_nFallbackStatTrak");

	offsets.DT_BaseViewModel.m_nModelIndex = Offsets::GetOffset(tables, "DT_BaseViewModel", "m_nModelIndex");
	offsets.DT_BaseViewModel.m_hWeapon = Offsets::GetOffset(tables, "DT_BaseViewModel", "m_hWeapon");
	offsets.DT_BaseViewModel.m_hOwner = Offsets::GetOffset(tables, "DT_BaseViewModel", "m_hOwner");

	offsets.DT_WeaponCSBase.m_bReloadVisuallyComplete = Offsets::GetOffset(tables, "DT_WeaponCSBase", "m_bReloadVisuallyComplete");
	offsets.DT_WeaponCSBase.m_fAccuracyPenalty = Offsets::GetOffset(tables, "DT_WeaponCSBase", "m_fAccuracyPenalty");
	offsets.DT_WeaponCSBase.m_flPostponeFireReadyTime = Offsets::GetOffset(tables, "DT_WeaponCSBase", "m_flPostponeFireReadyTime");

	offsets.DT_WeaponC4.m_bStartedArming = Offsets::GetOffset(tables, "DT_WeaponC4", "m_bStartedArming");

	offsets.DT_BaseCombatWeapon.m_flNextPrimaryAttack = Offsets::GetOffset(tables, "DT_BaseCombatWeapon", "m_flNextPrimaryAttack");
	offsets.DT_BaseCombatWeapon.m_hOwner = Offsets::GetOffset(tables, "DT_BaseCombatWeapon", "m_hOwner");
	offsets.DT_BaseCombatWeapon.m_iClip1 = Offsets::GetOffset(tables, "DT_BaseCombatWeapon", "m_iClip1");
	offsets.DT_BaseCombatWeapon.m_bInReload = offsets.DT_BaseCombatWeapon.m_flNextPrimaryAttack + 113;

	offsets.DT_BaseCSGrenade.m_bRedraw = Offsets::GetOffset(tables, "DT_BaseCSGrenade", "m_bRedraw");
	offsets.DT_BaseCSGrenade.m_bIsHeldByPlayer = Offsets::GetOffset(tables, "DT_BaseCSGrenade", "m_bIsHeldByPlayer");
	offsets.DT_BaseCSGrenade.m_bPinPulled = Offsets::GetOffset(tables, "DT_BaseCSGrenade", "m_bPinPulled");
	offsets.DT_BaseCSGrenade.m_fThrowTime = Offsets::GetOffset(tables, "DT_BaseCSGrenade", "m_fThrowTime");
	offsets.DT_BaseCSGrenade.m_bLoopingSoundPlaying = Offsets::GetOffset(tables, "DT_BaseCSGrenade", "m_bLoopingSoundPlaying");
	offsets.DT_BaseCSGrenade.m_flThrowStrength = Offsets::GetOffset(tables, "DT_BaseCSGrenade", "m_flThrowStrength");

	offsets.DT_DynamicProp.m_bShouldGlow = Offsets::GetOffset(tables, "DT_DynamicProp", "m_bShouldGlow");

	offsets.DT_CSGameRulesProxy.m_bBombPlanted = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bBombPlanted");
	offsets.DT_CSGameRulesProxy.m_bIsValveDS = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bIsValveDS");

	offsets.DT_CSGameRulesProxy.m_bFreezePeriod = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bFreezePeriod");
	offsets.DT_CSGameRulesProxy.m_bMatchWaitingForResume = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bMatchWaitingForResume");
	offsets.DT_CSGameRulesProxy.m_bWarmupPeriod = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bWarmupPeriod");
	offsets.DT_CSGameRulesProxy.m_fWarmupPeriodEnd = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_fWarmupPeriodEnd");
	offsets.DT_CSGameRulesProxy.m_fWarmupPeriodStart = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_fWarmupPeriodStart");
	offsets.DT_CSGameRulesProxy.m_bTerroristTimeOutActive = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bTerroristTimeOutActive");
	offsets.DT_CSGameRulesProxy.m_bCTTimeOutActive = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bCTTimeOutActive");
	offsets.DT_CSGameRulesProxy.m_flTerroristTimeOutRemaining = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flTerroristTimeOutRemaining");
	offsets.DT_CSGameRulesProxy.m_flCTTimeOutRemaining = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flCTTimeOutRemaining");
	offsets.DT_CSGameRulesProxy.m_nTerroristTimeOuts = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nTerroristTimeOuts");
	offsets.DT_CSGameRulesProxy.m_nCTTimeOuts = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nCTTimeOuts");
	offsets.DT_CSGameRulesProxy.m_iRoundTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iRoundTime");
	offsets.DT_CSGameRulesProxy.m_gamePhase = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_gamePhase");
	offsets.DT_CSGameRulesProxy.m_totalRoundsPlayed = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_totalRoundsPlayed");
	offsets.DT_CSGameRulesProxy.m_nOvertimePlaying = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nOvertimePlaying");
	offsets.DT_CSGameRulesProxy.m_timeUntilNextPhaseStarts = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_timeUntilNextPhaseStarts");
	offsets.DT_CSGameRulesProxy.m_flCMMItemDropRevealStartTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flCMMItemDropRevealStartTime");
	offsets.DT_CSGameRulesProxy.m_flCMMItemDropRevealEndTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flCMMItemDropRevealEndTime");
	offsets.DT_CSGameRulesProxy.m_fRoundStartTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_fRoundStartTime");
	offsets.DT_CSGameRulesProxy.m_bGameRestart = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bGameRestart");
	offsets.DT_CSGameRulesProxy.m_flRestartRoundTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flRestartRoundTime");
	offsets.DT_CSGameRulesProxy.m_flGameStartTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flGameStartTime");
	offsets.DT_CSGameRulesProxy.m_iHostagesRemaining = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iHostagesRemaining");
	offsets.DT_CSGameRulesProxy.m_bAnyHostageReached = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bAnyHostageReached");
	offsets.DT_CSGameRulesProxy.m_bMapHasBombTarget = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bMapHasBombTarget");
	offsets.DT_CSGameRulesProxy.m_bMapHasRescueZone = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bMapHasRescueZone");
	offsets.DT_CSGameRulesProxy.m_bMapHasBuyZone = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bMapHasBuyZone");
	offsets.DT_CSGameRulesProxy.m_bIsQueuedMatchmaking = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bIsQueuedMatchmaking");
	offsets.DT_CSGameRulesProxy.m_bIsValveDS = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bIsValveDS");
	offsets.DT_CSGameRulesProxy.m_bIsQuestEligible = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bIsQuestEligible");
	offsets.DT_CSGameRulesProxy.m_bLogoMap = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bLogoMap");
	offsets.DT_CSGameRulesProxy.m_iNumGunGameProgressiveWeaponsCT = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iNumGunGameProgressiveWeaponsCT");
	offsets.DT_CSGameRulesProxy.m_iNumGunGameProgressiveWeaponsT = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iNumGunGameProgressiveWeaponsT");
	offsets.DT_CSGameRulesProxy.m_iSpectatorSlotCount = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iSpectatorSlotCount");
	offsets.DT_CSGameRulesProxy.m_bBombDropped = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bBombDropped");
	offsets.DT_CSGameRulesProxy.m_bBombPlanted = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bBombPlanted");
	offsets.DT_CSGameRulesProxy.m_iRoundWinStatus = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iRoundWinStatus");
	offsets.DT_CSGameRulesProxy.m_eRoundWinReason = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_eRoundWinReason");
	offsets.DT_CSGameRulesProxy.m_flDMBonusStartTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flDMBonusStartTime");
	offsets.DT_CSGameRulesProxy.m_flDMBonusTimeLength = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flDMBonusTimeLength");
	offsets.DT_CSGameRulesProxy.m_unDMBonusWeaponLoadoutSlot = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_unDMBonusWeaponLoadoutSlot");
	offsets.DT_CSGameRulesProxy.m_bDMBonusActive = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bDMBonusActive");
	offsets.DT_CSGameRulesProxy.m_bTCantBuy = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bTCantBuy");
	offsets.DT_CSGameRulesProxy.m_bCTCantBuy = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bCTCantBuy");
	offsets.DT_CSGameRulesProxy.m_flGuardianBuyUntilTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flGuardianBuyUntilTime");
	offsets.DT_CSGameRulesProxy.m_iMatchStats_RoundResults = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iMatchStats_RoundResults");
	offsets.DT_CSGameRulesProxy.m_iMatchStats_PlayersAlive_T = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iMatchStats_PlayersAlive_T");
	offsets.DT_CSGameRulesProxy.m_iMatchStats_PlayersAlive_CT = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iMatchStats_PlayersAlive_CT");
	offsets.DT_CSGameRulesProxy.m_GGProgressiveWeaponOrderC = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_GGProgressiveWeaponOrderC");
	offsets.DT_CSGameRulesProxy.m_GGProgressiveWeaponOrderT = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_GGProgressiveWeaponOrderT");
	offsets.DT_CSGameRulesProxy.m_GGProgressiveWeaponKillUpgradeOrderCT = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_GGProgressiveWeaponKillUpgradeOrderCT");
	offsets.DT_CSGameRulesProxy.m_GGProgressiveWeaponKillUpgradeOrderT = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_GGProgressiveWeaponKillUpgradeOrderT");
	offsets.DT_CSGameRulesProxy.m_MatchDevice = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_MatchDevice");
	offsets.DT_CSGameRulesProxy.m_bHasMatchStarted = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bHasMatchStarted");
	offsets.DT_CSGameRulesProxy.m_TeamRespawnWaveTimes = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_TeamRespawnWaveTimes");
	offsets.DT_CSGameRulesProxy.m_flNextRespawnWave = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_flNextRespawnWave");
	offsets.DT_CSGameRulesProxy.m_nNextMapInMapgroup = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nNextMapInMapgroup");
	offsets.DT_CSGameRulesProxy.m_nEndMatchMapGroupVoteOptions = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nEndMatchMapGroupVoteOptions");
	offsets.DT_CSGameRulesProxy.m_bIsDroppingItems = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_bIsDroppingItems");
	offsets.DT_CSGameRulesProxy.m_iActiveAssassinationTargetMissionID = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_iActiveAssassinationTargetMissionID");
	offsets.DT_CSGameRulesProxy.m_fMatchStartTime = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_fMatchStartTime");
	offsets.DT_CSGameRulesProxy.m_szTournamentEventName = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_szTournamentEventName");
	offsets.DT_CSGameRulesProxy.m_szTournamentEventStage = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_szTournamentEventStage");
	offsets.DT_CSGameRulesProxy.m_szTournamentPredictionsTxt = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_szTournamentPredictionsTxt");
	offsets.DT_CSGameRulesProxy.m_nTournamentPredictionsPct = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nTournamentPredictionsPct");
	offsets.DT_CSGameRulesProxy.m_szMatchStatTxt = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_szMatchStatTxt");
	offsets.DT_CSGameRulesProxy.m_nGuardianModeWaveNumber = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nGuardianModeWaveNumber");
	offsets.DT_CSGameRulesProxy.m_nGuardianModeSpecialKillsRemaining = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nGuardianModeSpecialKillsRemaining");
	offsets.DT_CSGameRulesProxy.m_nGuardianModeSpecialWeaponNeeded = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nGuardianModeSpecialWeaponNeeded");
	offsets.DT_CSGameRulesProxy.m_nHalloweenMaskListSeed = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_nHalloweenMaskListSeed");
	offsets.DT_CSGameRulesProxy.m_numGlobalGiftsGiven = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_numGlobalGiftsGiven");
	offsets.DT_CSGameRulesProxy.m_numGlobalGifters = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_numGlobalGifters");
	offsets.DT_CSGameRulesProxy.m_numGlobalGiftsPeriodSeconds = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_numGlobalGiftsPeriodSeconds");
	offsets.DT_CSGameRulesProxy.m_arrFeaturedGiftersAccounts = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_arrFeaturedGiftersAccounts");
	offsets.DT_CSGameRulesProxy.m_arrFeaturedGiftersGifts = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_arrFeaturedGiftersGifts");
	offsets.DT_CSGameRulesProxy.m_arrProhibitedItemIndices = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_arrProhibitedItemIndices");
	offsets.DT_CSGameRulesProxy.m_numBestOfMaps = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_numBestOfMaps");
	offsets.DT_CSGameRulesProxy.m_arrTournamentActiveCasterAccounts = Offsets::GetOffset(tables, "DT_CSGameRulesProxy", "m_arrTournamentActiveCasterAccounts");
	
	free(tables->table);
	free(tables);
}

Tables* Offsets::GetTables()
{
	Tables* tables = (Tables*) malloc(sizeof(Tables));
	ServerClass* pClass = Interface.server->GetAllServerClasses();
	if (!pClass)
		return nullptr;
	tables->table = (SendTable**) malloc(sizeof(ptrdiff_t));
	tables->amount = 0;
	
	while(pClass)
	{
		SendTable* sendTable = pClass->m_pTable;
		tables->table[tables->amount] = sendTable;
		pClass = pClass->m_pNext;
		++tables->amount;
		if(pClass)
			tables->table = (SendTable**) realloc(tables->table, sizeof(ptrdiff_t) * (tables->amount + 1));
	}
	return tables;
}

int Offsets::GetOffset(Tables* tables, const char* tableName, const char* propName)
{
	int offset = GetProp(tables, tableName, propName, nullptr);
	if (!offset)
		return 0;
	if(offset > 0x10000) // Offset cannot be > 65535 (It's impossible!)
		offset = offset & 0xFFFF;
	return offset;
}

int Offsets::GetProp(Tables* tables, const char* tableName, const char* propName, SendProp** prop)
{
	SendTable* sendTable = GetTable(tables, tableName);
	if (!sendTable)
		return 0;

	int offset = GetProp(tables, sendTable, propName, prop);
	if (!offset)
		return 0;

	return offset;
}

int Offsets::GetProp(Tables* tables, SendTable* sendTable, const char* propName, SendProp** prop)
{
	int extraOffset = 0;

	for (int i = 0; i < sendTable->m_nProps; ++i) {
		SendProp* sendProp = &sendTable->m_pProps[i];
		SendTable* child = sendProp->m_pDataTable;
		
		if (child && (child->m_nProps > 0))
		{
			int tmp = GetProp(tables, child, propName, prop);
			if (tmp)
				extraOffset += (sendProp->m_Offset + tmp);
		}
		
		if (strcasecmp(sendProp->m_pVarName, propName))
			continue;

		if (prop)
			*prop = sendProp;
		return (sendProp->m_Offset + extraOffset);
	}
	return extraOffset;
}

SendTable* Offsets::GetTable(Tables* tables, const char* tableName)
{
	for (unsigned long i = 0; i < tables->amount; ++i)
	{
		SendTable* table = tables->table[i];
		if (!table)
			continue;

		if (strcasecmp(table->m_pNetTableName, tableName) == 0)
			return table;
	}
	
	return nullptr;
}
/*
void Offsets::DumpNetvars()
{
	FILE* f = fopen("DumpNetVars.txt", "wt");
	for (ServerClass* pClass = Interface.server->GetAllServerClasses(); pClass != NULL; pClass = pClass->m_pNext)
	{
		SendTable* table = pClass->m_pTable;
		Offsets::DumpTable(table, 0, f);
	}
	fclose(f);
}

void Offsets::DumpTable(SendTable* table, const int depth, FILE* f)
{
	for (int i = 0; i < depth; i++)
		fputc('\t', f);

	fputs(table->m_pNetTableName, f);
	fputc('\n', f);

	for (int i = 0; i < table->m_nProps; i++) {
		SendProp* prop = &table->m_pProps[i];
		if (!prop)
			continue;

		if (strcasestr(prop->m_pVarName, "baseclass") != 0 || 
			strcasestr(prop->m_pVarName, "0") != 0  || 
			strcasestr(prop->m_pVarName, "1") != 0  || 
			strcasestr(prop->m_pVarName, "2") != 0 )
			continue;
		
		for (int i = 0; i < depth; i++)
			fputc('\t', f);
		fprintf(f, "\t %s [0x%08x]\n", prop->m_pVarName, prop->m_Offset);

		if (prop->m_pDataTable)
			DumpTable(prop->m_pDataTable, depth + 1, f);
	}
}
*/
