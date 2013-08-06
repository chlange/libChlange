#ifndef CTYPE_H
#define CTYPE_H

#include <sys/cdefs.h>

__BEGIN_DECLS

/* isalpha(c) or isdigit(c) */
int isalnum(int c);

/* isupper(c) or islower(c) */
int isalpha(int c);

/* is control character */
int iscntrl(int c);

/* is decimal digit */
int isdigit(int c);

/* is printing character other than space */
int isgraph(int c);

/* is lower-case letter */
int islower(int c);

/* is printing character (including space) */
int isprint(int c);

/* is printing character other than space, letter, digit */
int ispunct(int c);

/* is space, formfeed, newline, carriage return, tab, vertical tab */
int isspace(int c);

/* is upper-case letter */
int isupper(int c);

/* is hexadecimal digit */
int isxdigit(int c);

/* return lower-case equivalent */
int tolower(int c);

/* return upper-case equivalent */
int toupper(int c);

__END_DECLS

#endif
