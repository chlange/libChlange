#include <string.h>

size_t strlen(const char *str) {
	register const char *p = str;
	while(*p++)
		;
	return p - str;
}
