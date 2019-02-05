#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient013_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient013_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient013_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient013_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient013_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient013_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient013_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient013_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient013_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient013_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient013_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient013_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient013_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient013_GetISteamInventory(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient013_GetISteamVideo(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient013_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif
