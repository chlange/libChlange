#include <string.h>

void *memchr(const void *str, int c, size_t n) {
	char *p = (char *)str; 
    while(n-- > 0) {
        if(*p == c)
            return p;
        p++;
    }
	return NULL;
}
