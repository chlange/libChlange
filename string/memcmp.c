#include <string.h>

int memcmp(const void *str1, const void *str2, size_t n) {
	char *p1 = (char *)str1, *p2 = (char *)str2;
    while(n-- > 0)
        if(*p1 != *p2)
            return (*p1 - *p2);
        else
            p1++, p2++;
	return 0;
}
