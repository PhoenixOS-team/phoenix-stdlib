void *Heap_Alloc(unsigned int size);
void Heap_Free(void *ptr);
void *Heap_Realloc(void *ptr, unsigned int newSize);

#define malloc Heap_Alloc
#define free Heap_Free
#define realloc Heap_Realloc

void *calloc(unsigned int count, unsigned int size);
int atoi(char *s);
int abs(int x);

void Random_Seed(long seed);
long Random_Next(void);

#define RAND_MAX 2147483647

void srand(unsigned int seed);
int rand(void);
