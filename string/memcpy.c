#include <string.h>

void *memcpy(void *str1, const void *str2, size_t n) {
    register char *p1 = str1;
    register const char *p2 = str2;
    while(n--)
        *p1++ = *p2++;
    return str1;
}
