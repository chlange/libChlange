#include <string.h>

void *memmove(void *str1, const void *str2, size_t n) {
    register char *p1 = str1;
    register const char *p2 = str2;
    while(n--) 
        *(p1 + n) = *(p2 + n);
    return str1;
}
