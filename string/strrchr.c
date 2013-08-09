#include <string.h>

char *strrchr(const char *str, int c) {
	register char chr = c;
	register const char *ret = 0;

	while(*str++)
		if(*str == chr)
			ret = str;

	return (char *)ret;
}
