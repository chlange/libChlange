#include <ctype/isprint.h>

int isprint(int c) {
	return (c >= 0x20 && c <= 0x7E) ? 1 : 0;
}
