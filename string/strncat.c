#include <string.h>

char *strncat(char *str1, const char *str2, size_t n) {
    register char *p1 = str1;
    register const char *p2 = str2;
    while(*p1++)
        ;
    while((*p1++ = *p2++) && n-- > 0)
        ;
    *p1 = '\0';
    return str1;
}
