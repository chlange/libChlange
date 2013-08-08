#include <string.h>

void *memchr(const void *str, int c, size_t n) {
    register const char *p = str; 
    while(n--)
        if(*p == c)
            return (void *)p;
        else
		p++;
    return NULL;
}
