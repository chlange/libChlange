#include <string.h>

void *memchr(const void *str, int c, size_t n) {
	char *p = (char *)str; 
    if(n > 0) {
        while(n--) {
            if(*p == c)
                return p;
            p++;
        }
    }
	return NULL;
}
