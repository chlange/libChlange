#ifndef STDDEF_H
#define STDDEF_H

#include <sys/cdefs.h>

__BEGIN_DECLS

#define NULL (void*)0

typedef signed long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;

#define offsetof(type, member) ((size_t) &(((type *)0)->member))

__END_DECLS

#endif
