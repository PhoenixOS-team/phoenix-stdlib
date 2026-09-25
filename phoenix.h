long Mem_GetAllocated(void);
long Mem_GetHeap(void);

char *Clock_GetUptime(void);

void Power_Reboot(void);
void Power_Shutdown(void);
void Power_Halt(void);

long Shell_IsGraphical(void);
long Shell_EnterGui(void);
long Shell_CloseWindow(void);
long Shell_HistoryCount(void);
char *Shell_HistoryGet(long index);

char *Path_Get(void);

long Disk_Count(void);
char *Disk_Name(void);
long Disk_BlockCount(void);
long Disk_BlockSize(void);
long Disk_HasMbr(void);
long Disk_PartitionCount(void);
long Disk_Mounted(void);
long Disk_Mount(void);
long Disk_Format(void);
char *Disk_LastMessage(void);

char *OS_GetVersion(void);
char *OS_GetKernelVersion(void);
