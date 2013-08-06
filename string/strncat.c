#include <string.h>

char *strncat(char *str1, const char *str2, size_t n) {
    char *p1 = str1, *p2 = (char *)str2;
    while(*p1)
        p1++;
    while(*p2 && n-- > 0)
        *p1++ = *p2++;
    *p1 = '\0';
    return str1;
}
