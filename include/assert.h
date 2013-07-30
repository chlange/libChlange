#ifndef ASSERT_H
#define ASSERT_H

#include <sys/cdefs.h>

__BEGIN_DECLS

#ifdef NDEBUG

    #define assert(ignore)((void) 0)

#else

    void assertFail(char *exp, char *file, char *baseFile, int line);

    #define assert(exp)  if (exp) ; \
            else assertFail( #exp, __FILE__, __BASE_FILE__, __LINE__ )

#endif

__END_DECLS

#endif
