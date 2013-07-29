#include <ctype/islower.h>

int islower(int c) {
	return (c >= 0x61 && c <= 0x7A) ? 1 : 0;
}
