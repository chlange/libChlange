#include <string.h>

char *strchr(const char *str, int c) {
    char *p = (char *)str;
    while(*p)
        if(*p == c)
            return p;
        else
            p++;
    return NULL;
}
