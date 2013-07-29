#include <ctype/isalnum.h>
#include <ctype/isalpha.h>
#include <ctype/isdigit.h>

int isalnum(int c) {
	return (isalpha(c) || isdigit(c)) ? 1 : 0;
}
