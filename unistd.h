char *Fs_GetCwd(void);
int Fs_Chdir(char *path);
int Fs_Mkdir(char *path);
int Fs_Rmdir(char *path);
int Fs_Unlink(char *path);
int Fs_Rename(char *oldpath, char *newpath);
int Fs_Stat(char *path, int *isDir, int *size);

void *Dir_Open(char *path);
char *Dir_Read(void *dir);
void Dir_Close(void *dir);

int Stdin_HasInput(void);
char *Stdin_ReadLineA(void);
