#include <string.h>

int strcmp(const char *str1, const char *str2) {
    register const char *p1 = str1;
    register const char *p2 = str2;
    while(*p1)
        if(*p1 != *p2)
            return (*p1 - *p2);
        else
            p1++, p2++;
    return 0;
}
