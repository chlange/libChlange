#include <string.h>

void *memset(void *str, int c, size_t n) {
    register char *p = str;
    while(n-- > 0)
        *p++ = c;
    return str;
}
