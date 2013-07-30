#ifndef CTYPE_H
#define CTYPE_H

#include <sys/cdefs.h>

__BEGIN_DECLS

int isalnum(int c);
int isalpha(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);

__END_DECLS

#endif
