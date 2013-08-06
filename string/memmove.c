#include <string.h>

void *memmove(void *str1, const void *str2, size_t n) {
	unsigned char *p1 = str1;
	unsigned char *p2 = (unsigned char*)str2;
    while(n-- > 0) 
        *(p1 + n) = *(p2 + n);
    return str1;
}
