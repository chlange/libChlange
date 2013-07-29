#include <ctype/isdigit.h>

int isdigit(int c) {
	return (c >= 0x30 && c <= 0x39) ? 1 : 0;
}
