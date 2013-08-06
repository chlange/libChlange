#include <string.h>

char *strcpy(char *str1, const char *str2) {
    char *p1 = (char *)str1, *p2 = (char *)str2;
    while(*p2)
        *p1++ = *p2++;
    *p1 = '\0';
    return str1;
}
