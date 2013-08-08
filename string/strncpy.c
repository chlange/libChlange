#include <string.h>

char *strncpy(char *str1, const char *str2, size_t n) {
    register char *p1 = str1;
    register const char *p2 = str2;
    while(n-- > 0) {
        if(*p2)
            *p1++ = *p2++;
        else
            *p1++ = '\0';
    }
    return str1;
}
