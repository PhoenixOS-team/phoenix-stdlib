typedef void FILE;

int printf(char *fmt, ...);
unsigned int snprintf(char *buf, unsigned int size, char *fmt, ...);
unsigned int sprintf(char *buf, char *fmt, ...);

void Console_WriteLineA(char *text);
void Console_WriteA(char *text);
char *Console_ReadLineA(void);
char *getline(void);
int putchar(int c);
void puts(char *text);
void Console_Clear(void);
void Console_SetCursorPosition(int x, int y);

void Console_SetColor(int color);
void Console_ResetColor(void);

void Console_WriteLineInt32(int v);
void Console_WriteInt32(int v);
void Console_WriteLineInt64(long v);
void Console_WriteInt64(long v);

FILE *File_Open(char *path, char *mode);
int File_Close(FILE *file);
int File_Read(void *buffer, unsigned int size, unsigned int count, FILE *file);
int File_Write(void *buffer, unsigned int size, unsigned int count, FILE *file);
int File_Seek(FILE *file, int offset, int whence);
int File_Tell(FILE *file);
int File_Flush(FILE *file);

void Cosmos_Get_Program_Arguments(int *argc, char ***argv);
