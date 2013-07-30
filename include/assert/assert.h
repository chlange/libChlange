#ifndef ASSERT_H
#define ASSERT_H

#ifdef NDEBUG

    #define assert(ignore)((void) 0)

#else

    void assertionFailure(char *exp, char *file, char *baseFile, int line);

    #define assert(exp)  if (exp) ; \
            else assertionFailure( #exp, __FILE__, __BASE_FILE__, __LINE__ )

#endif

#endif
