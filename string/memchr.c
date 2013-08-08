#include <string.h>

void *memchr(const void *str, int c, size_t n) {
    register const char *p = str; 
    while(n-- > 0) {
        if(*p == c)
            return (void *)p;
        p++;
    }
    return NULL;
}
