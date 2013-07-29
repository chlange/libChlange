#ifdef ASSERT_H

	#include <assert/assert.h>

	void assertionFailure(char *exp, char *file, char *baseFile, int line)
	{
	    if (!strcmp(file, baseFile)) {
	       fprintf(stderr, 
		   "Assert(%s) failed in file %s, line %d\n", exp, file, line);
	    } else {
	       fprintf(stderr, 
		   "Assert(%s) failed in file %s (included from %s), line %d\n", 
		   exp, file, baseFile, line);
	    }
	}

#else

	/* Avoid: ISO C forbids an empty translation unit */
	typedef int ignore;

#endif
