#ifndef STRING_H
#define STRING_H

#include <stddef.h>

void *memchr(const void *str, int c, size_t n);
size_t strlen(const char *str);
int memcmp(const void *str1, const void *str2, size_t n);
void *memcpy(void *str1, const void *str2, size_t n);
void *memmove(void *str1, const void *str2, size_t n);
void *memset(void *str, int c, size_t n);
char *strcat(char *str1, const char *str2);
char *strncat(char *str1, const char *str2, size_t n);

#endif
