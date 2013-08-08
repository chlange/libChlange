#include <string.h>

char *strcpy(char *str1, const char *str2) {
    register char *p1 = str1;
    register const char *p2 = str2;
    while((*p1++ = *p2++))
	;
    *p1 = '\0';
    return str1;
}
