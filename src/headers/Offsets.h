#pragma once

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef u_int8_t byte;

struct COffsets
{
	struct
	{
		ptrdiff_t m_Local;
		ptrdiff_t m_aimPunchAngle;
		ptrdiff_t m_viewPunchAngle;
		ptrdiff_t m_vecViewOffset;
		ptrdiff_t m_nTickBase;
		ptrdiff_t m_vecVelocity;
		ptrdiff_t m_iHealth;
		ptrdiff_t m_lifeState;
		ptrdiff_t m_fFlags;
		ptrdiff_t m_iObserverMode;
		ptrdiff_t m_hObserverTarget;
		ptrdiff_t m_hViewModel;
		ptrdiff_t m_szLastPlaceName;
		ptrdiff_t deadflag;
	} DT_BasePlayer;

	struct
	{
		ptrdiff_t m_flAnimTime;
		ptrdiff_t m_flSimulationTime;
		ptrdiff_t m_vecOrigin;
		ptrdiff_t m_nRenderMode;
		ptrdiff_t m_iTeamNum;
		ptrdiff_t m_MoveType;
		ptrdiff_t m_Collision;
		ptrdiff_t m_bSpotted;
	} DT_BaseEntity;

	struct
	{
		ptrdiff_t m_hActiveWeapon;
		ptrdiff_t m_hMyWeapons;
		ptrdiff_t m_hMyWearables;
	} DT_BaseCombatCharacter;

	struct
	{
		ptrdiff_t m_iPing;
		ptrdiff_t m_iKills;
		ptrdiff_t m_iAssists;
		ptrdiff_t m_iDeaths;
		ptrdiff_t m_bConnected;
		ptrdiff_t m_iTeam;
		ptrdiff_t m_iPendingTeam;
		ptrdiff_t m_bAlive;
		ptrdiff_t m_iHealth;
	} DT_PlayerResource;

	struct
	{
		ptrdiff_t m_iPlayerC4;
		ptrdiff_t m_iPlayerVIP;
		ptrdiff_t m_bHostageAlive;
		ptrdiff_t m_isHostageFollowingSomeone;
		ptrdiff_t m_iHostageEntityIDs;
		ptrdiff_t m_bombsiteCenterB;
		ptrdiff_t m_hostageRescueX;
		ptrdiff_t m_hostageRescueY;
		ptrdiff_t m_hostageRescueZ;
		ptrdiff_t m_iMVPs;
		ptrdiff_t m_iArmor;
		ptrdiff_t m_bHasHelmet;
		ptrdiff_t m_bHasDefuser;
		ptrdiff_t m_iScore;
		ptrdiff_t m_iCompetitiveRanking;
		ptrdiff_t m_iCompetitiveWins;
		ptrdiff_t m_iCompTeammateColor;
		ptrdiff_t m_bControllingBot;
		ptrdiff_t m_iControlledPlayer;
		ptrdiff_t m_iControlledByPlayer;
		ptrdiff_t m_iBotDifficulty;
		ptrdiff_t m_szClan;
		ptrdiff_t m_iTotalCashSpent;
		ptrdiff_t m_iCashSpentThisRound;
		ptrdiff_t m_nEndMatchNextMapVotes;
		ptrdiff_t m_bEndMatchNextMapAllVoted;
		ptrdiff_t m_nActiveCoinRank;
		ptrdiff_t m_nMusicID;
		ptrdiff_t m_nPersonaDataPublicLevel;
		ptrdiff_t m_nPersonaDataPublicCommendsLeader;
		ptrdiff_t m_nPersonaDataPublicCommendsTeacher;
		ptrdiff_t m_nPersonaDataPublicCommendsFriendly;
	} DT_CSPlayerResource;

	struct
	{
		ptrdiff_t m_bBombTicking;
		ptrdiff_t m_flC4Blow;
		ptrdiff_t m_bBombDefused;
		ptrdiff_t m_hBombDefuser;
	} DT_PlantedC4;

	struct
	{
		ptrdiff_t m_iShotsFired;
		ptrdiff_t m_angEyeAngles[2];
		ptrdiff_t m_iAccount;
		ptrdiff_t m_totalHitsOnServer;
		ptrdiff_t m_ArmorValue;
		ptrdiff_t m_bHasDefuser;
		ptrdiff_t m_bIsDefusing;
		ptrdiff_t m_bIsGrabbingHostage;
		ptrdiff_t m_bIsScoped;
		ptrdiff_t m_bGunGameImmunity;
		ptrdiff_t m_bIsRescuing;
		ptrdiff_t m_bHasHelmet;
		ptrdiff_t m_flFlashDuration;
		ptrdiff_t m_flFlashMaxAlpha;
		ptrdiff_t m_flLowerBodyYawTarget;
	} DT_CSPlayer;

	struct
	{
		ptrdiff_t m_iItemDefinitionIndex;
		ptrdiff_t m_iItemIDHigh;
		ptrdiff_t m_iAccountID;
		ptrdiff_t m_iEntityQuality;
		ptrdiff_t m_szCustomName;
		ptrdiff_t m_nFallbackPaintKit;
		ptrdiff_t m_nFallbackSeed;
		ptrdiff_t m_flFallbackWear;
		ptrdiff_t m_nFallbackStatTrak;
	} DT_BaseAttributableItem;

	struct
	{
		ptrdiff_t m_nModelIndex;
		ptrdiff_t m_hWeapon;
		ptrdiff_t m_hOwner;
	} DT_BaseViewModel;

	struct
	{
		ptrdiff_t m_bReloadVisuallyComplete;
		ptrdiff_t m_fAccuracyPenalty;
		ptrdiff_t m_flPostponeFireReadyTime;
	} DT_WeaponCSBase;

	struct
	{
		ptrdiff_t m_bStartedArming;
	} DT_WeaponC4;

	struct
	{
		ptrdiff_t m_bRedraw;
		ptrdiff_t m_bIsHeldByPlayer;
		ptrdiff_t m_bPinPulled;
		ptrdiff_t m_fThrowTime;
		ptrdiff_t m_bLoopingSoundPlaying;
		ptrdiff_t m_flThrowStrength;
	} DT_BaseCSGrenade;

	struct
	{
		ptrdiff_t m_flNextPrimaryAttack;
		ptrdiff_t m_hOwner;
		ptrdiff_t m_iClip1;
		ptrdiff_t m_bInReload;
	} DT_BaseCombatWeapon;

	struct
	{
		ptrdiff_t m_bShouldGlow;
	} DT_DynamicProp;

	struct
	{
		ptrdiff_t m_bFreezePeriod;
		ptrdiff_t m_bMatchWaitingForResume;
		ptrdiff_t m_bWarmupPeriod;
		ptrdiff_t m_fWarmupPeriodEnd;
		ptrdiff_t m_fWarmupPeriodStart;
		ptrdiff_t m_bTerroristTimeOutActive;
		ptrdiff_t m_bCTTimeOutActive;
		ptrdiff_t m_flTerroristTimeOutRemaining;
		ptrdiff_t m_flCTTimeOutRemaining;
		ptrdiff_t m_nTerroristTimeOuts;
		ptrdiff_t m_nCTTimeOuts;
		ptrdiff_t m_iRoundTime;
		ptrdiff_t m_gamePhase;
		ptrdiff_t m_totalRoundsPlayed;
		ptrdiff_t m_nOvertimePlaying;
		ptrdiff_t m_timeUntilNextPhaseStarts;
		ptrdiff_t m_flCMMItemDropRevealStartTime;
		ptrdiff_t m_flCMMItemDropRevealEndTime;
		ptrdiff_t m_fRoundStartTime;
		ptrdiff_t m_bGameRestart;
		ptrdiff_t m_flRestartRoundTime;
		ptrdiff_t m_flGameStartTime;
		ptrdiff_t m_iHostagesRemaining;
		ptrdiff_t m_bAnyHostageReached;
		ptrdiff_t m_bMapHasBombTarget;
		ptrdiff_t m_bMapHasRescueZone;
		ptrdiff_t m_bMapHasBuyZone;
		ptrdiff_t m_bIsQueuedMatchmaking;
		ptrdiff_t m_bIsValveDS;
		ptrdiff_t m_bIsQuestEligible;
		ptrdiff_t m_bLogoMap;
		ptrdiff_t m_iNumGunGameProgressiveWeaponsCT;
		ptrdiff_t m_iNumGunGameProgressiveWeaponsT;
		ptrdiff_t m_iSpectatorSlotCount;
		ptrdiff_t m_bBombDropped;
		ptrdiff_t m_bBombPlanted;
		ptrdiff_t m_iRoundWinStatus;
		ptrdiff_t m_eRoundWinReason;
		ptrdiff_t m_flDMBonusStartTime;
		ptrdiff_t m_flDMBonusTimeLength;
		ptrdiff_t m_unDMBonusWeaponLoadoutSlot;
		ptrdiff_t m_bDMBonusActive;
		ptrdiff_t m_bTCantBuy;
		ptrdiff_t m_bCTCantBuy;
		ptrdiff_t m_flGuardianBuyUntilTime;
		ptrdiff_t m_iMatchStats_RoundResults;
		ptrdiff_t m_iMatchStats_PlayersAlive_T;
		ptrdiff_t m_iMatchStats_PlayersAlive_CT;
		ptrdiff_t m_GGProgressiveWeaponOrderC;
		ptrdiff_t m_GGProgressiveWeaponOrderT;
		ptrdiff_t m_GGProgressiveWeaponKillUpgradeOrderCT;
		ptrdiff_t m_GGProgressiveWeaponKillUpgradeOrderT;
		ptrdiff_t m_MatchDevice;
		ptrdiff_t m_bHasMatchStarted;
		ptrdiff_t m_TeamRespawnWaveTimes;
		ptrdiff_t m_flNextRespawnWave;
		ptrdiff_t m_nNextMapInMapgroup;
		ptrdiff_t m_nEndMatchMapGroupVoteOptions;
		ptrdiff_t m_bIsDroppingItems;
		ptrdiff_t m_iActiveAssassinationTargetMissionID;
		ptrdiff_t m_fMatchStartTime;
		ptrdiff_t m_szTournamentEventName;
		ptrdiff_t m_szTournamentEventStage;
		ptrdiff_t m_szTournamentPredictionsTxt;
		ptrdiff_t m_nTournamentPredictionsPct;
		ptrdiff_t m_szMatchStatTxt;
		ptrdiff_t m_nGuardianModeWaveNumber;
		ptrdiff_t m_nGuardianModeSpecialKillsRemaining;
		ptrdiff_t m_nGuardianModeSpecialWeaponNeeded;
		ptrdiff_t m_nHalloweenMaskListSeed;
		ptrdiff_t m_numGlobalGiftsGiven;
		ptrdiff_t m_numGlobalGifters;
		ptrdiff_t m_numGlobalGiftsPeriodSeconds;
		ptrdiff_t m_arrFeaturedGiftersAccounts;
		ptrdiff_t m_arrFeaturedGiftersGifts;
		ptrdiff_t m_arrProhibitedItemIndices;
		ptrdiff_t m_numBestOfMaps;
		ptrdiff_t m_arrTournamentActiveCasterAccounts;
	} DT_CSGameRulesProxy;
};

class SendTable;
class CSendTablePrecalc;
class SendProp;
class CSendProxyRecipients;
struct RecvProp;

class ServerClass
{
	public:
		ServerClass( const char *pNetworkName, SendTable *pTable );
		const char*	GetName();
	public:
		const char*					m_pNetworkName;
		SendTable*					m_pTable;
		ServerClass*				m_pNext;
		int							m_ClassID;	// Managed by the engine.

		// This is an index into the network string table (sv.GetInstanceBaselineTable()).
		int							m_InstanceBaselineIndex; // INVALID_STRING_INDEX if not initialized yet.
};

typedef enum
{
        DPT_Int=0,
        DPT_Float,
        DPT_Vector,
        DPT_VectorXY, // Only encodes the XY of a vector, ignores Z
        DPT_String,
        DPT_Array,      // An array of the base types (can't be of datatables).
        DPT_DataTable,
#if 0 // We can't ship this since it changes the size of DTVariant to be 20 bytes instead of 16 and that breaks MODs!!!
        DPT_Quaternion,
#endif
        DPT_Int64,
        DPT_NUMSendPropTypes
} SendPropType;

struct DVariant
{
	union
	{
		float m_Float;
		long m_Int;
		char *m_pString;
		void *m_pData;
		float m_Vector[3];
		int64_t m_Int64;
	};

	int m_Type;
};

struct CRecvProxyData
{
	const RecvProp* m_pRecvProp;
	DVariant m_Value;
	int m_iElement;
	int m_ObjectID;
};

struct RecvTable
{
	RecvProp *m_pProps;
	int m_nProps;
	void *m_pDecoder;
	char *m_pNetTableName;
	bool m_bInitialized;
	bool m_bInMainList;
};

typedef void (*RecvVarProxyFn) (const CRecvProxyData *pData, void *pStruct, void *pOut);
typedef void (*SendVarProxyFn) (const SendProp *pProp, const void *pStructBase, const void *pData, DVariant *pOut, int iElement, int objectID);
typedef void* (*SendTableProxyFn) (const SendProp *pProp, const void *pStructBase, const void *pData, CSendProxyRecipients *pRecipients, int objectID);
typedef int (*ArrayLengthSendProxyFn) (const void *pStruct, int objectID);

struct RecvProp
{
	char *m_pVarName;
	int m_RecvType;
	int m_Flags;
	int m_StringBufferSize;
	bool m_bInsideArray;
	const void *m_pExtraData;
	RecvProp *m_pArrayProp;
	void *m_ArrayLengthProxy;
	RecvVarProxyFn m_ProxyFn;
	void *m_DataTableProxyFn;
	RecvTable *m_pDataTable;
	int m_Offset;
	int m_ElementStride;
	int m_nElements;
	const char *m_pParentArrayPropName;
};

class SendProp
{
public:
						SendProp();
	virtual				~SendProp();

	void				Clear();

	int					GetOffset() const;
	void				SetOffset( int i );

	SendVarProxyFn		GetProxyFn() const;
	void				SetProxyFn( SendVarProxyFn f );
	
	SendTableProxyFn	GetDataTableProxyFn() const;
	void				SetDataTableProxyFn( SendTableProxyFn f );
	
	SendTable*			GetDataTable() const;
	void				SetDataTable( SendTable *pTable );

	char const*			GetExcludeDTName() const;
	
	// If it's one of the numbered "000", "001", etc properties in an array, then
	// these can be used to get its array property name for debugging.
	const char*			GetParentArrayPropName() const;
	void				SetParentArrayPropName( char *pArrayPropName );

	const char*			GetName() const;

	bool				IsSigned() const;
	
	bool				IsExcludeProp() const;
	
	bool				IsInsideArray() const;	// Returns true if SPROP_INSIDEARRAY is set.
	void				SetInsideArray();

	// Arrays only.
	void				SetArrayProp( SendProp *pProp );
	SendProp*			GetArrayProp() const;

	// Arrays only.
	void					SetArrayLengthProxy( ArrayLengthSendProxyFn fn );
	ArrayLengthSendProxyFn	GetArrayLengthProxy() const;

	int					GetNumElements() const;
	void				SetNumElements( int nElements );

	// Return the # of bits to encode an array length (must hold GetNumElements()).
	int					GetNumArrayLengthBits() const;

	int					GetElementStride() const;

	SendPropType		GetType() const;

	int					GetFlags() const;
	void				SetFlags( int flags );	

	// Some property types bind more data to the SendProp in here.
	const void*			GetExtraData() const;
	void				SetExtraData( const void *pData );

	byte 				GetPriority() const;
	void				SetPriority( byte priority );

	// These tell us which kind of CNetworkVar we're referring to.
	int					GetNetworkVarFlags() const;
	bool				AreNetworkVarFlagsSet( int nFlags ) const;

	// This is only ever used by SendPropXXX functions internally. They receive offset with the networkvar
	// flags OR'd and shifted in, so they'll specify both at the same time.
	void				SetOffsetAndNetworkVarFlags( int nOffsetAndFlags );

public:

	RecvProp		*m_pMatchingRecvProp;	// This is temporary and only used while precalculating
												// data for the decoders.

	SendPropType	m_Type;
	int				m_nBits;
	float			m_fLowValue;
	float			m_fHighValue;
	
	SendProp		*m_pArrayProp;					// If this is an array, this is the property that defines each array element.
	ArrayLengthSendProxyFn	m_ArrayLengthProxy;	// This callback returns the array length.
	
	int				m_nElements;		// Number of elements in the array (or 1 if it's not an array).
	int				m_ElementStride;	// Pointer distance between array elements.

	char *m_pExcludeDTName;			// If this is an exclude prop, then this is the name of the datatable to exclude a prop from.
	char *m_pParentArrayPropName;

	char			*m_pVarName;
	float			m_fHighLowMul;

	byte			m_priority;
	
public:

	int					m_Flags;				// SPROP_ flags.

	SendVarProxyFn		m_ProxyFn;				// NULL for DPT_DataTable.
	SendTableProxyFn	m_DataTableProxyFn;		// Valid for DPT_DataTable.
	
	SendTable			*m_pDataTable;
	
	// This also contains the NETWORKVAR_ flags shifted into the SENDPROP_NETWORKVAR_FLAGS_SHIFT range. 
	// (Use GetNetworkVarFlags to access them).
	int					m_Offset;

	// Extra data bound to this property.
	const void			*m_pExtraData;
};


class SendTable
{
public:

	typedef SendProp PropType;

				SendTable();
				SendTable( SendProp *pProps, int nProps, char *pNetTableName );
				~SendTable();

	void		Construct( SendProp *pProps, int nProps, char *pNetTableName );

	const char*	GetName() const;
	
	int			GetNumProps() const;
	SendProp*	GetProp( int i );

	// Used by the engine.
	bool		IsInitialized() const;
	void		SetInitialized( bool bInitialized );

	// Used by the engine while writing info into the signon.
	void		SetWriteFlag(bool bHasBeenWritten);
	bool		GetWriteFlag() const;

	bool		HasPropsEncodedAgainstTickCount() const;
	void		SetHasPropsEncodedAgainstTickcount( bool bState );

public:

	SendProp	*m_pProps;
	int			m_nProps;

	char		*m_pNetTableName;	// The name matched between client and server.

	// The engine hooks the SendTable here.
	CSendTablePrecalc	*m_pPrecalc;


protected:		
	bool		m_bInitialized : 1;	
	bool		m_bHasBeenWritten : 1;		
	bool		m_bHasPropsEncodedAgainstCurrentTickCount : 1; // m_flSimulationTime and m_flAnimTime, e.g.
};



extern COffsets offsets;

struct Tables
{
	SendTable** table;
	size_t amount;
};

namespace Offsets
{
	void GetOffsets();
	Tables* GetTables();
	int GetOffset(Tables* tables, const char* tableName, const char* propName);
	int GetProp(Tables* tables, const char* tableName, const char* propName, SendProp** prop);
	int GetProp(Tables* tables, SendTable* sendTable, const char* propName, SendProp** prop);
	SendTable* GetTable(Tables* tables, const char* tableName);
	//void DumpTable(SendTable* table, const int depth, FILE* f);
	//void DumpNetvars();
}
