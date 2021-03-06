#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient016_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient016_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient016_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient016_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient016_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient016_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient016_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient016_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient016_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient016_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient016_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient016_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient016_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamMusicRemote(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient016_GetISteamHTMLSurface(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess(void *, SteamAPI_PostAPIResultInProcess_t);
extern void cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess(void *, SteamAPI_PostAPIResultInProcess_t);
extern void cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *, SteamAPI_CheckCallbackRegistered_t);
#ifdef __cplusplus
}
#endif
