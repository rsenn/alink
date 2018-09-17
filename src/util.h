#ifndef UTIL_H
#define UTIL_H 1

int getBitCount(UINT a);
void ClearNbit(PUCHAR mask, long i);
void SetNbit(PUCHAR mask, long i);
char GetNbit(PUCHAR mask, long i);
long GetIndex(PUCHAR buf, long *index);
void ReportError(long errnum);
int wstricmp(const char *s1, const char *s2);
int wstrlen(const char *s);
int sortCompare(const void *x1, const void *x2);
void *checkMalloc(size_t x);
void *checkRealloc(void *p, size_t x);
char *checkStrdup(const char *s);
PSORTENTRY binarySearch(PSORTENTRY list, UINT count, char *key);
void sortedInsert(PSORTENTRY *plist, UINT *pcount, char *key, void *object);
char *strupr(char *s);

#endif
