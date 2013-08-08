#include <string.h>

void *memset(void *str, int c, size_t n) {
    register char *p = str;
    while(n--)
        *p++ = c;
    return str;
}
