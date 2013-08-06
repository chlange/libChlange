#include <string.h>

char *strncpy(char *str1, const char *str2, size_t n) {
    char *p1 = (char *)str1, *p2 = (char *)str2;
    while(n-- > 0) {
        if(*p2)
            *p1++ = *p2++;
        else
            *p1++ = '\0';
    }
    return str1;
}
