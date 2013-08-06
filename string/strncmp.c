#include <string.h>

int strncmp(const char *str1, const char *str2, size_t n) {
    char *p1 = (char *)str1, *p2 = (char *)str2;
    while(n-- > 0) {
        if(*p1 != *p2)
            return (*p1 - *p2);
        else
            p1++, p2++;

        /* Stop after null character */
        if(!*(p1 - 1))
            break;
    }
    return 0;
}
