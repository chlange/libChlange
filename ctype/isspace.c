#include <ctype/isspace.h>

int isspace(int c) {
	return (c == 0x09 || c == 0x0A || c == 0x0B || c == 0x0C || c == 0x0D || c == 0x20 ) ? 1 : 0;
}
