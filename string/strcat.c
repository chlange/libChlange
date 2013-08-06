#include <string.h>

char *strcat(char *str1, const char *str2) {
    char *p1 = str1, *p2 = (char *)str2;
    while(*p1)
        p1++;
    while(*p2)
        *p1++ = *p2++;
    *p1 = '\0';
    return str1;
}
