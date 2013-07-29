#include <ctype/isupper.h>

int isupper(int c) {
	return (c >= 0x41 && c <= 0x5A) ? 1 : 0;
}
