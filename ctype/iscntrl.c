#include <ctype.h>

int iscntrl(int c) {
	return ((c > 0x0 && c < 0x1F) || c == 0x7F) ? 1 : 0;
}
