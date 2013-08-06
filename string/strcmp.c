#include <string.h>

int strcmp(const char *str1, const char *str2) {
    char *p1 = (char *)str1, *p2 = (char *)str2;
    while(*p1)
        if(*p1 != *p2)
            return (*p1 - *p2);
        else
            p1++, p2++;
    return 0;
}
