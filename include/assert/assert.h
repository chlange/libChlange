#ifdef NDEBUG
	#define assert(ignore)((void) 0)
#else
	#ifndef ASSERT_H
	#define ASSERT_H

	void assertionFailure(char *exp, char *file, char *baseFile, int line);

	void assert(int expression)  if (expression) ; \
        	else assertionFailure( #expression, __FILE__, __BASE_FILE__, __LINE__ )

	#endif
#endif
