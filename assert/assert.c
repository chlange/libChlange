#include <assert/assert.h>
#include <stdio.h>

#ifndef NDEBUG

	void assertionFailure(char *exp, char *file, char *baseFile, int line)
	{
	    if (!strcmp(file, baseFile)) {
	       fprintf(stderr, 
		   "assert(%s) failed in file %s, line %d\n", exp, file, line);
	    } else {
	       fprintf(stderr, 
		   "assert(%s) failed in file %s (included from %s), line %d\n", 
		   exp, file, baseFile, line);
	    }
	}

#else

	/* Avoid: ISO C forbids an empty translation unit */
	typedef int ignore;

#endif
