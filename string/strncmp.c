#include <string.h>

int strncmp(const char *str1, const char *str2, size_t n) {
    register const char *p1 = str1;
    register const char *p2 = str2;
    while(n--) {
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
