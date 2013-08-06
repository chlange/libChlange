#include <string.h>

void *memcpy(void *str1, const void *str2, size_t n) {
	unsigned char *p1 = str1;
	unsigned char *p2 = (unsigned char*)str2;
	while(n--)
		*p1++ = *p2++;
	return str1;
}
