long Net_IsUp(void);
char *Net_GetIp(void);
char *Net_GetMac(void);
long Net_Dhcp(void);
char *Net_Resolve(char *host);
long Net_Ping(char *hostOrIp, long timeoutMs);
long Net_HttpGet(char *host, char *path, char *outBuf, long maxLen, long timeoutMs);
long Net_HttpsGet(char *host, char *path, char *outBuf, long maxLen, long timeoutMs);
