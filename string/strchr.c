#include <string.h>

char *strchr(const char *str, int c) {
    register char *p = (char *)str;
    register const char chr = c;
    while(*p)
        if(*p == chr)
            return p;
        else
            p++;
    return NULL;
}
