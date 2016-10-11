#pragma once

#include "sdk.h"

typedef struct D3DMATRIX
{
	float m[4][4];
} D3DMATRIX , *LPD3DMATRIX;

namespace HookIndexSDK
{
	enum IVEngineClient
	{
		GetIntersectingSurfaces ,
		GetLightForPoint ,
		TraceLineMaterialAndLighting ,
		ParseFile ,
		FileCopy ,
		GetScreenSize ,
		ServerCmd ,
		ClientCmd ,
		GetPlayerInfo ,
		GetPlayerForUserID ,
		TextMessageGet ,
		Con_IsVisible ,
		GetLocalPlayer ,
		LoadModel ,
		GetLastTimeStamp ,
		GetSentence ,
		GetSentenceLength ,
		IsStreaming ,
		GetViewAngles ,
		SetViewAngles ,
		GetMaxClients ,
		Key_LookupBinding ,
		Key_BindingForKey ,
		Key_SetBinding ,
		StartKeyTrapMode ,
		CheckDoneKeyTrapping ,
		IsInGame ,
		IsConnected ,
		IsDrawingLoadingImage ,
		HideLoadingPlaque ,
		Con_NPrintf ,
		Con_NXPrintf ,
		IsBoxVisible ,
		IsBoxInViewCluster ,
		CullBox ,
		Sound_ExtraUpdate ,
		GetGameDirectory ,
		WorldToScreenMatrix ,
		WorldToViewMatrix ,
		GameLumpVersion ,
		GameLumpSize ,
		LoadGameLump ,
		LevelLeafCount ,
		GetBSPTreeQuery ,
		LinearToGamma ,
		LightStyleValue ,
		ComputeDynamicLighting ,
		GetAmbientLightColor ,
		GetDXSupportLevel ,
		SupportsHDR ,
		Mat_Stub ,
		GetChapterName ,
		GetLevelName ,
		GetLevelNameShort ,
		GetMapGroupName ,
		GetVoiceTweakAPI ,
		SetVoiceCasterID ,
		EngineStats_BeginFrame ,
		EngineStats_EndFrame ,
		FireEvents ,
		GetLeavesArea ,
		DoesBoxTouchAreaFrustum ,
		GetFrustumList ,
		ShouldUseAreaFrustum ,
		SetAudioState ,
		SentenceGroupPick ,
		SentenceGroupPickSequential ,
		SentenceIndexFromName ,
		SentenceNameFromIndex ,
		SentenceGroupIndexFromName ,
		SentenceGroupNameFromIndex ,
		SentenceLength ,
		ComputeLighting ,
		ActivateOccluder ,
		IsOccluded ,
		GetOcclusionViewId ,
		SaveAllocMemory ,
		SaveFreeMemory ,
		GetNetChannelInfo ,
		DebugDrawPhysCollide ,
		CheckPoint ,
		DrawPortals ,
		IsPlayingDemo ,
		IsRecordingDemo ,
		IsPlayingTimeDemo ,
		GetDemoRecordingTick ,
		GetDemoPlaybackTick ,
		GetDemoPlaybackStartTick ,
		GetDemoPlaybackTimeScale ,
		GetDemoPlaybackTotalTicks ,
		IsPaused ,
		GetTimescale ,
		IsTakingScreenshot ,
		IsHLTV ,
		IsLevelMainMenuBackground ,
		GetMainMenuBackgroundName ,
		SetOcclusionParameters ,
		GetUILanguage ,
		IsSkyboxVisibleFromPoint ,
		GetMapEntitiesString ,
		IsInEditMode ,
		GetScreenAspectRatio ,
		REMOVED_SteamRefreshLogin ,
		REMOVED_SteamProcessCall ,
		GetEngineBuildNumber ,
		GetProductVersionString ,
		GrabPreColorCorrectedFrame ,
		IsHammerRunning ,
		ExecuteClientCmd ,
		MapHasHDRLighting ,
		MapHasLightMapAlphaData ,
		GetAppID ,
		GetLightForPointFast ,
		ClientCmd_Unrestricted1 ,
		ClientCmd_Unrestricted2 ,
		SetRestrictServerCommands ,
		SetRestrictClientCommands ,
		SetOverlayBindProxy ,
		CopyFrameBufferToMaterial ,
		ReadConfiguration ,
		SetAchievementMgr ,
		GetAchievementMgr ,
		MapLoadFailed ,
		SetMapLoadFailed ,
		IsLowViolence ,
		GetMostRecentSaveGame ,
		SetMostRecentSaveGame ,
		StartXboxExitingProcess ,
		IsSaveInProgress ,
		IsAutoSaveDangerousInProgress ,
		OnStorageDeviceAttached ,
		OnStorageDeviceDetached ,
		GetSaveDirName ,
		WriteScreenshot ,
		ResetDemoInterpolation ,
		GetActiveSplitScreenPlayerSlot ,
		SetActiveSplitScreenPlayerSlot ,
		SetLocalPlayerIsResolvable ,
		IsLocalPlayerResolvable ,
		GetSplitScreenPlayer ,
		IsSplitScreenActive ,
		IsValidSplitScreenSlot ,
		FirstValidSplitScreenSlot ,
		NextValidSplitScreenSlot ,
		GetSinglePlayerSharedMemorySpace ,
		ComputeLightingCube ,
		RegisterDemoCustomDataCallback ,
		RecordDemoCustomData ,
		SetPitchScale ,
		GetPitchScale ,
		LoadFilmmaker ,
		UnloadFilmmaker ,
		SetLeafFlag ,
		RecalculateBSPLeafFlags ,
		DSPGetCurrentDASRoomNew ,
		DSPGetCurrentDASRoomChanged ,
		DSPGetCurrentDASRoomSkyAbove ,
		DSPGetCurrentDASRoomSkyPercent ,
		SetMixGroupOfCurrentMixer ,
		GetMixLayerIndex ,
		SetMixLayerLevel ,
		GetMixGroupIndex ,
		SetMixLayerTriggerFactor1 ,
		SetMixLayerTriggerFactor2 ,
		IsCreatingReslist ,
		IsCreatingXboxReslist ,
		SetTimescale ,
		SetGamestatsData ,
		GetGamestatsData ,
		GetMouseDelta ,
		Key_LookupBindingEx ,
		Key_CodeForBinding ,
		UpdateDAndELights ,
		GetBugSubmissionCount ,
		ClearBugSubmissionCount ,
		DoesLevelContainWater ,
		GetServerSimulationFrameTime ,
		SolidMoved ,
		TriggerMoved ,
		ComputeLeavesConnected ,
		IsInCommentaryMode ,
		SetBlurFade ,
		IsTransitioningToLoad ,
		SearchPathsChangedAfterInstall ,
		ConfigureSystemLevel ,
		SetConnectionPassword ,
		GetSteamAPIContext ,
		SubmitStatRecord ,
		ServerCmdKeyValues ,
		SpherePaintSurface ,
		HasPaintmap ,
		EnablePaintmapRender ,
		SphereTracePaintSurface ,
		RemoveAllPaint ,
		PaintAllSurfaces ,
		RemovePaint ,
		IsActiveApp ,
		IsClientLocalToActiveServer ,
		TickProgressBar ,
		GetInputContext ,
		GetStartupImage ,
		IsUsingLocalNetworkBackdoor ,
		SaveGame ,
		GetGenericMemoryStats ,
		GameHasShutdownAndFlushedMemory ,
		GetLastAcknowledgedCommand ,
		FinishContainerWrites ,
		FinishAsyncSave ,
		GetServerTick ,
		GetModDirectory ,
		AudioLanguageChanged ,
		IsAutoSaveInProgress ,
		StartLoadingScreenForCommand ,
		StartLoadingScreenForKeyValues ,
		SOSSetOpvarFloat ,
		SOSGetOpvarFloat ,
		IsSubscribedMap ,
		IsFeaturedMap ,
		GetDemoPlaybackParameters ,
		GetClientVersion ,
		IsDemoSkipping ,
		SetDemoImportantEventData ,
		ClearEvents ,
		GetSafeZoneXMin ,
		IsVoiceRecording ,
		ForceVoiceRecordOn ,
		IsReplay
	};

	enum IBaseClientDLL
	{
		Connect ,
		Disconnect ,
		Init ,
		PostInit ,
		Shutdown ,
		LevelInitPreEntity ,
		LevelInitPostEntity ,
		LevelShutdown ,
		GetAllClasses ,
		HudVidInit ,
		HudProcessInput ,
		HudUpdate ,
		HudReset ,
		HudText ,
		ShouldDrawDropdownConsole ,
		IN_ActivateMouse ,
		IN_DeactivateMouse ,
		IN_Accumulate ,
		IN_ClearStates ,
		IN_IsKeyDown ,
		IN_KeyEvent ,
		CreateMove ,
		ExtraMouseSample ,
		WriteUsercmdDeltaToBuffer ,
		EncodeUserCmdToBuffer ,
		DecodeUserCmdFromBuffer ,
		View_Render ,
		RenderView ,
		View_Fade ,
		SetCrosshairAngle ,
		InitSprite ,
		ShutdownSprite ,
		GetSpriteSize ,
		VoiceStatus ,
		PlayerAudible ,
		InstallStringTableCallback ,
		FrameStageNotify ,
		DispatchUserMessage
	};

	enum ISurface
	{
		DrawSetColor1 = 14 ,
		DrawSetColor2 = 15 ,
		DrawFilledRect = 16 ,
		DrawOutlinedRect = 18 ,
		DrawLine = 19 ,
		DrawSetTextFont = 23 ,
		DrawSetTextColor = 24 ,
		DrawSetTextPos = 26 ,
		DrawPrintText = 28 ,
		FontCreate = 71 ,
		SetFontGlyphSet = 72 ,
		GetTextSize = 79
	};

	enum IPanel
	{
		IsVisible = 15 ,
		GetName = 36 ,
		PaintTraverse = 41
	};

	enum IClientMode
	{
		CL_CreateMove = 24
	};

	enum IEngineSound
	{
		PrecacheSound ,
		IsSoundPrecached ,
		PrefetchSound ,
		IsLoopingSound ,
		GetSoundDuration ,
		EmitSound1 ,
		EmitSound2 ,
		EmitSentenceByIndex ,
		StopSound ,
		StopAllSounds
	};

	enum D3D9
	{
		QueryInterface ,
		AddRef ,
		Release ,
		TestCooperativeLevel ,
		GetAvailableTextureMem ,
		EvictManagedResources ,
		GetDirect3D ,
		GetDeviceCaps ,
		GetDisplayMode ,
		GetCreationParameters ,
		SetCursorProperties ,
		SetCursorPosition ,
		ShowCursor ,
		CreateAdditionalSwapChain ,
		GetSwapChain ,
		GetNumberOfSwapChains ,
		Reset ,
		Present ,
		GetBackBuffer ,
		GetRasterStatus ,
		SetDialogBoxMode ,
		SetGammaRamp ,
		GetGammaRamp ,
		CreateTexture ,
		CreateVolumeTexture ,
		CreateCubeTexture ,
		CreateVertexBuffer ,
		CreateIndexBuffer ,
		CreateRenderTarget ,
		CreateDepthStencilSurface ,
		UpdateSurface ,
		UpdateTexture ,
		GetRenderTargetData ,
		GetFrontBufferData ,
		StretchRect ,
		ColorFill ,
		CreateOffscreenPlainSurface ,
		SetRenderTarget ,
		GetRenderTarget ,
		SetDepthStencilSurface ,
		GetDepthStencilSurface ,
		BeginScene ,
		EndScene ,
		Clear ,
		SetTransform ,
		GetTransform ,
		MultiplyTransform ,
		SetViewport ,
		GetViewport ,
		SetMaterial ,
		GetMaterial ,
		SetLight ,
		GetLight ,
		LightEnable ,
		GetLightEnable ,
		SetClipPlane ,
		GetClipPlane ,
		SetRenderState ,
		GetRenderState ,
		CreateStateBlock ,
		BeginStateBlock ,
		EndStateBlock ,
		SetClipStatus ,
		GetClipStatus ,
		GetTexture ,
		SetTexture ,
		GetTextureStageState ,
		SetTextureStageState ,
		GetSamplerState ,
		SetSamplerState ,
		ValidateDevice ,
		SetPaletteEntries ,
		GetPaletteEntries ,
		SetCurrentTexturePalette ,
		GetCurrentTexturePalette ,
		SetScissorRect ,
		GetScissorRect ,
		SetSoftwareVertexProcessing ,
		GetSoftwareVertexProcessing ,
		SetNPatchMode ,
		GetNPatchMode ,
		DrawPrimitive ,
		DrawIndexedPrimitive ,
		DrawPrimitiveUP ,
		DrawIndexedPrimitiveUP ,
		ProcessVertices ,
		CreateVertexDeclaration ,
		SetVertexDeclaration ,
		GetVertexDeclaration ,
		SetFVF ,
		GetFVF ,
		CreateVertexShader ,
		SetVertexShader ,
		GetVertexShader ,
		SetVertexShaderConstantF ,
		GetVertexShaderConstantF ,
		SetVertexShaderConstantI ,
		GetVertexShaderConstantI ,
		SetVertexShaderConstantB ,
		GetVertexShaderConstantB ,
		SetStreamSource ,
		GetStreamSource ,
		SetStreamSourceFreq ,
		GetStreamSourceFreq ,
		SetIndices ,
		GetIndices ,
		CreatePixelShader ,
		SetPixelShader ,
		GetPixelShader ,
		SetPixelShaderConstantF ,
		GetPixelShaderConstantF ,
		SetPixelShaderConstantI ,
		GetPixelShaderConstantI ,
		SetPixelShaderConstantB ,
		GetPixelShaderConstantB ,
		DrawRectPatch ,
		DrawTriPatch ,
		DeletePatch ,
		CreateQuery
	};
}

enum PLAYER_TEAM
{
	TEAM_SPEC = 1 ,
	TEAM_TT ,
	TEAM_CT
};

enum WEAPON_TYPE
{
	WEAPON_TYPE_PISTOL ,
	WEAPON_TYPE_SHOTGUN ,
	WEAPON_TYPE_SNIPER ,
	WEAPON_TYPE_GRENADE ,
	WEAPON_TYPE_KNIFE ,
	WEAPON_TYPE_C4 ,
	WEAPON_TYPE_UNKNOWN ,
};

enum ITEM_INDEX
{
	WEAPON_NONE = 0,
	WEAPON_DEAGLE = 1 ,
	WEAPON_ELITE = 2 ,
	WEAPON_FIVESEVEN = 3 ,
	WEAPON_GLOCK = 4 ,
	WEAPON_AK47 = 7 ,
	WEAPON_AUG = 8 ,
	WEAPON_AWP = 9 ,
	WEAPON_FAMAS = 10 ,
	WEAPON_G3SG1 = 11 ,
	WEAPON_GALILAR = 13 ,
	WEAPON_M249 = 14 ,
	WEAPON_M4A1 = 16 ,
	WEAPON_MAC10 = 17 ,
	WEAPON_P90 = 19 ,
	WEAPON_UMP45 = 24 ,
	WEAPON_XM1014 = 25 ,
	WEAPON_BIZON = 26 ,
	WEAPON_MAG7 = 27 ,
	WEAPON_NEGEV = 28 ,
	WEAPON_SAWEDOFF = 29 ,
	WEAPON_TEC9 = 30 ,
	WEAPON_TASER = 31 ,
	WEAPON_HKP2000 = 32 ,
	WEAPON_MP7 = 33 ,
	WEAPON_MP9 = 34 ,
	WEAPON_NOVA = 35 ,
	WEAPON_P250 = 36 ,
	WEAPON_SCAR20 = 38 ,
	WEAPON_SG553 = 39 ,
	WEAPON_SSG08 = 40 ,
	WEAPON_KNIFE = 42 ,
	WEAPON_FLASHBANG = 43 ,
	WEAPON_HEGRENADE = 44 ,
	WEAPON_SMOKEGRENADE = 45 ,
	WEAPON_MOLOTOV = 46 ,
	WEAPON_DECOY = 47 ,
	WEAPON_INCGRENADE = 48 ,
	WEAPON_C4 = 49 ,
	WEAPON_KNIFE_T = 59 ,
	WEAPON_M4A1_SILENCER = 60 ,
	WEAPON_USP_SILENCER = 61 ,
	WEAPON_CZ75A = 63 ,
	WEAPON_REVOLVER = 64 ,
	WEAPON_KNIFE_BAYONET = 500 ,
	WEAPON_KNIFE_FLIP = 505 ,
	WEAPON_KNIFE_GUT = 506 ,
	WEAPON_KNIFE_KARAMBIT = 507 ,
	WEAPON_KNIFE_M9_BAYONET = 508 ,
	WEAPON_KNIFE_TACTICAL = 509 ,
	WEAPON_KNIFE_FALCHION = 512 ,
	WEAPON_KNIFE_SURVIVAL_BOWIE = 514 ,
	WEAPON_KNIFE_BUTTERFLY = 515 ,
	WEAPON_KNIFE_PUSH = 516
};

enum CLIENT_CLASS_ID
{
	CC_CTestTraceline = 193 ,
	CC_CTEWorldDecal = 194 ,
	CC_CTESpriteSpray = 191 ,
	CC_CTESprite = 190 ,
	CC_CTESparks = 189 ,
	CC_CTESmoke = 188 ,
	CC_CTEShowLine = 186 ,
	CC_CTEProjectedDecal = 183 ,
	CC_CFEPlayerDecal = 60 ,
	CC_CTEPlayerDecal = 182 ,
	CC_CTEPhysicsProp = 179 ,
	CC_CTEParticleSystem = 178 ,
	CC_CTEMuzzleFlash = 177 ,
	CC_CTELargeFunnel = 175 ,
    CC_CTEKillPlayerAttachments = 174 ,
	CC_CTEImpact = 173 ,
	CC_CTEGlowSprite = 172 ,
	CC_CTEShatterSurface = 185 ,
	CC_CTEFootprintDecal = 169 ,
	CC_CTEFizz = 168 ,
    CC_CTEExplosion = 166 ,
	CC_CTEEnergySplash = 165 ,
	CC_CTEEffectDispatch = 164 ,
	CC_CTEDynamicLight = 163 ,
	CC_CTEDecal = 161 ,
	CC_CTEClientProjectile = 160 ,
	CC_CTEBubbleTrail = 159 ,
	CC_CTEBubbles = 158 ,
	CC_CTEBSPDecal = 157 ,
    CC_CTEBreakModel = 156 ,
	CC_CTEBloodStream = 155 ,
	CC_CTEBloodSprite = 154 , 
	CC_CTEBeamSpline = 153 ,
	CC_CTEBeamRingPoint = 152 ,
	CC_CTEBeamRing = 151 ,
	CC_CTEBeamPoints = 150 ,
	CC_CTEBeamLaser = 149 ,
	CC_CTEBeamFollow = 148 ,
	CC_CTEBeamEnts = 147 ,
	CC_CTEBeamEntPoint = 146 ,
	CC_CTEBaseBeam = 145 ,
	CC_CTEArmorRicochet = 144 ,
	CC_CTEMetalSparks = 176 ,
	CC_CSteamJet = 139 ,
	CC_CSmokeStack = 132 ,
	CC_DustTrail = 243 ,
	CC_CFireTrail = 63 ,
	CC_SporeTrail = 249 ,
	CC_SporeExplosion = 248 ,
	CC_RocketTrail = 246 ,
	CC_SmokeTrail = 247 ,
	CC_CPropVehicleDriveable = 119 ,
	CC_ParticleSmokeGrenade = 245 ,
	CC_CParticleFire = 98 ,
	CC_MovieExplosion = 244 ,
	CC_CTEGaussExplosion = 171 ,
	CC_CEnvQuadraticBeam = 55 ,
	CC_CEmbers = 45 ,
	CC_CEnvWind = 59 ,
	CC_CPrecipitation = 113 ,
	CC_CPrecipitationBlocker = 114 ,
	CC_CBaseTempEntity = 18 ,
	CC_NextBotCombatCharacter = 0 ,
	CC_CBaseAttributableItem = 4 ,
	CC_CEconEntity = 44 ,
	CC_CWeaponXM1014 = 241 ,
	CC_CWeaponTaser = 236 ,
	CC_CSmokeGrenade = 130 ,
	CC_CWeaponSG552 = 233 ,
	CC_CSensorGrenade = 126 ,
	CC_CWeaponSawedoff = 229 ,
	CC_CWeaponNOVA = 225 ,
	CC_CIncendiaryGrenade = 86 ,
	CC_CMolotovGrenade = 95 ,
	CC_CWeaponM3 = 217 ,
	CC_CKnifeGG = 92 ,
	CC_CKnife = 91 ,
	CC_CHEGrenade = 83 ,
	CC_CFlashbang = 65 ,
	CC_CWeaponElite = 208 ,
	CC_CDecoyGrenade = 40 , 
	CC_CDEagle = 39 ,
	CC_CWeaponUSP = 240 ,
	CC_CWeaponM249 = 216 ,
	CC_CWeaponUMP45 = 239 ,
	CC_CWeaponTMP = 238 ,
	CC_CWeaponTec9 = 237 ,
	CC_CWeaponSSG08 = 235 ,
	CC_CWeaponSG556 = 234 ,
	CC_CWeaponSG550 = 232 ,
	CC_CWeaponScout = 231 ,
	CC_CWeaponSCAR20 = 230 ,
	CC_CSCAR17 = 124 ,
	CC_CWeaponP90 = 228 ,
	CC_CWeaponP250 = 227 ,
	CC_CWeaponP228 = 226 ,
	CC_CWeaponNegev = 224 ,
	CC_CWeaponMP9 = 223 ,
	CC_CWeaponMP7 = 222 ,
	CC_CWeaponMP5Navy = 221 ,
	CC_CWeaponMag7 = 220 ,
	CC_CWeaponMAC10 = 219 ,
	CC_CWeaponM4A1 = 218 ,
	CC_CWeaponHKP2000 = 215 ,
	CC_CWeaponGlock = 214 ,
	CC_CWeaponGalilAR = 213 ,
	CC_CWeaponGalil = 212 ,
	CC_CWeaponG3SG1 = 211 ,
	CC_CWeaponFiveSeven = 210 ,
	CC_CWeaponFamas = 209 ,
	CC_CWeaponBizon = 204 ,
	CC_CWeaponAWP = 202 ,
	CC_CWeaponAug = 201 ,
	CC_CAK47 = 1 ,
	CC_CWeaponCSBaseGun = 206 ,
	CC_CWeaponCSBase = 205 ,
	CC_CC4 = 29 ,
	CC_CWeaponBaseItem = 203 ,
	CC_CBaseCSGrenade = 8 ,
	CC_CSmokeGrenadeProjectile = 131 ,
	CC_CSensorGrenadeProjectile = 127 ,
	CC_CMolotovProjectile = 96 ,
	CC_CItem_Healthshot = 90 ,
	CC_CDecoyProjectile = 41 ,
	CC_CFireCrackerBlast = 61 ,
	CC_CInferno = 87 ,
	CC_CChicken = 31 ,
	CC_CFootstepControl = 67 ,
	CC_CCSGameRulesProxy = 34 ,
	CC_CWeaponCubemap = 0 ,
	CC_CWeaponCycler = 207 ,
	CC_CTEPlantBomb = 180 ,
	CC_CTEFireBullets = 167 ,
	CC_CTERadioIcon = 184 ,
	CC_CPlantedC4 = 106 ,
	CC_CCSTeam = 38 ,
	CC_CCSPlayerResource = 36 ,
	CC_CCSPlayer = 35 ,
	CC_CCSRagdoll = 37 ,
	CC_CTEPlayerAnimEvent = 181 ,
	CC_CHostage = 84 ,
	CC_CHostageCarriableProp = 85 ,
	CC_CBaseCSGrenadeProjectile = 9 ,
	CC_CHandleTest = 82 ,
	CC_CTeamplayRoundBasedRulesProxy = 143 ,
	CC_CSpriteTrail = 137 ,
	CC_CSpriteOriented = 136 ,
	CC_CSprite = 135 ,
	CC_CRagdollPropAttached = 122 ,
	CC_CRagdollProp = 121 ,
	CC_CPredictedViewModel = 115 ,
	CC_CPoseController = 111 ,
	CC_CGameRulesProxy = 81 ,
	CC_CInfoLadderDismount = 88 ,
	CC_CFuncLadder = 73 ,
	CC_CTEFoundryHelpers = 170 ,
	CC_CEnvDetailController = 51 ,
	CC_CWorld = 242 ,
	CC_CWaterLODControl = 200 ,
	CC_CWaterBullet = 199 ,
	CC_CVoteController = 198 ,
	CC_CVGuiScreen = 197 ,
	CC_CPropJeep = 118 ,
	CC_CPropVehicleChoreoGeneric = 0 ,
	CC_CTriggerSoundOperator = 196 ,
	CC_CBaseVPhysicsTrigger = 22 ,
	CC_CTriggerPlayerMovement = 195 ,
	CC_CBaseTrigger = 20 ,
	CC_CTest_ProxyToggle_Networkable = 192 ,
	CC_CTesla = 187 ,
	CC_CBaseTeamObjectiveResource = 17 ,
	CC_CTeam = 142 ,
	CC_CSunlightShadowControl = 141 ,
	CC_CSun = 140 ,
	CC_CParticlePerformanceMonitor = 99 ,
	CC_CSpotlightEnd = 134 ,
	CC_CSpatialEntity = 133 ,
	CC_CSlideshowDisplay = 129 ,
	CC_CShadowControl = 128 ,
	CC_CSceneEntity = 125 ,
	CC_CRopeKeyframe = 123 ,
	CC_CRagdollManager = 120 ,
	CC_CPhysicsPropMultiplayer = 104 ,
	CC_CPhysBoxMultiplayer = 102 ,
	CC_CPropDoorRotating = 117 ,
	CC_CBasePropDoor = 16 ,
	CC_CDynamicProp = 43 ,
	CC_CProp_Hallucination = 116 ,
	CC_CPostProcessController = 112 ,
	CC_CPointCommentaryNode = 110 ,
	CC_CPointCamera = 109 ,
	CC_CPlayerResource = 108 ,
	CC_CPlasma = 107 ,
	CC_CPhysMagnet = 105 ,
	CC_CPhysicsProp = 103 ,
	CC_CStatueProp = 138 ,
	CC_CPhysBox = 101 ,
	CC_CParticleSystem = 100 ,
	CC_CMovieDisplay = 97 ,
	CC_CMaterialModifyControl = 94 ,
	CC_CLightGlow = 93 ,
	CC_CInfoOverlayAccessor = 89 ,
	CC_CFuncTrackTrain = 80 ,
	CC_CFuncSmokeVolume = 79 ,
	CC_CFuncRotating = 78 ,
	CC_CFuncReflectiveGlass = 77 ,
	CC_CFuncOccluder = 76 ,
	CC_CFuncMoveLinear = 75 ,
	CC_CFuncMonitor = 74 ,
	CC_CFunc_LOD = 69 ,
	CC_CTEDust = 162 ,
	CC_CFunc_Dust = 68 ,
	CC_CFuncConveyor = 72 ,
	CC_CFuncBrush = 71 ,
	CC_CBreakableSurface = 28 ,
	CC_CFuncAreaPortalWindow = 70 ,
	CC_CFish = 64 ,
	CC_CFireSmoke = 62 ,
	CC_CEnvTonemapController = 58 ,
	CC_CEnvScreenEffect = 56 ,
	CC_CEnvScreenOverlay = 57 ,
	CC_CEnvProjectedTexture = 54 ,
	CC_CEnvParticleScript = 53 ,
	CC_CFogController = 66 ,
	CC_CEnvDOFController = 52 ,
	CC_CCascadeLight = 30 ,
	CC_CEnvAmbientLight = 50 ,
	CC_CEntityParticleTrail = 49 ,
	CC_CEntityFreezing = 48 ,
	CC_CEntityFlame = 47 ,
	CC_CEntityDissolve = 46 ,
	CC_CDynamicLight = 42 ,
	CC_CColorCorrectionVolume = 33 ,
	CC_CColorCorrection = 32 ,
	CC_CBreakableProp = 27 ,
	CC_CBeamSpotlight = 25 ,
	CC_CBaseButton = 5 ,
	CC_CBaseToggle = 19 ,
	CC_CBasePlayer = 15 ,
	CC_CBaseFlex = 12 ,
	CC_CBaseEntity = 11 ,
	CC_CBaseDoor = 10 ,
	CC_CBaseCombatCharacter = 6 ,
	CC_CBaseAnimatingOverlay = 3 ,
	CC_CBoneFollower = 26 ,
	CC_CBaseAnimating = 2 ,
	CC_CAI_BaseNPC = 0 ,
	CC_CBeam = 24 ,
	CC_CBaseViewModel = 21 ,
	CC_CBaseParticleEntity = 14 ,
	CC_CBaseGrenade = 13 ,
	CC_CBaseCombatWeapon = 7 ,
	CC_CBaseWeaponWorldModel = 23 ,
};

template< typename Function > Function call_func( PVOID Base , DWORD Index )
{
	PDWORD* VTablePointer = (PDWORD*)Base;
	PDWORD VTableFunctionBase = *VTablePointer;
	DWORD dwAddress = VTableFunctionBase[Index];
	return (Function)( dwAddress );
}