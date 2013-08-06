#ifndef STRING_H
#define STRING_H

#include <stddef.h>

//~ Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to by the argument str.
//~ Returns a pointer pointing to the first matching character, or null if no match was found.
void *memchr(const void *str, int c, size_t n);

//~ Compares the first n bytes of str1 and str2. Does not stop comparing even after the null character (it always checks n characters).
//~ Returns zero if the first n bytes of str1 and str2 are equal. Returns less than zero or greater than zero if str1 is less than or greater than str2 respectively.
int memcmp(const void *str1, const void *str2, size_t n);

//~ Copies n characters from str2 to str1. If str1 and str2 overlap the behavior is undefined.
//~ Returns the argument str1.
void *memcpy(void *str1, const void *str2, size_t n);

//~ Copies n characters from str2 to str1. If str1 and str2 overlap the information is first completely read from str1 and then written to str2 so that the characters are copied correctly.
//~ Returns the argument str1.
void *memmove(void *str1, const void *str2, size_t n);

//~ Copies the character c (an unsigned char) to the first n characters of the string pointed to by the argument str.
//~ The argument str is returned.
void *memset(void *str, int c, size_t n);

//~ Computes the length of the string str up to but not including the terminating null character.
//~ Returns the number of characters in the string.
size_t strlen(const char *str);

//~ Appends the string pointed to by str2 to the end of the string pointed to by str1. The terminating null character of str1 is overwritten. Copying stops once the terminating null character of str2 is copied. If overlapping occurs, the result is undefined.
//~ The argument str1 is returned.
char *strcat(char *str1, const char *str2);

//~ Appends the string pointed to by str2 to the end of the string pointed to by str1 up to n characters long. The terminating null character of str1 is overwritten. Copying stops once n characters are copied or the terminating null character of str2 is copied. A terminating null character is always appended to str1. If overlapping occurs, the result is undefined.
//~ The argument str1 is returned.
char *strncat(char *str1, const char *str2, size_t n);

//~ Searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string.
//~ Returns a pointer pointing to the first matching character, or null if no match was found.
char *strchr(const char *str, int c);

//~ Compares the string pointed to by str1 to the string pointed to by str2.
//~ Returns zero if str1 and str2 are equal. Returns less than zero or greater than zero if str1 is less than or greater than str2 respectively.
int strcmp(const char *str1, const char *str2);

//~ Compares at most the first n bytes of str1 and str2. Stops comparing after the null character.
//~ Returns zero if the first n bytes (or null terminated length) of str1 and str2 are equal. Returns less than zero or greater than zero if str1 is less than or greater than str2 respectively.
int strncmp(const char *str1, const char *str2, size_t n);
/*int strcoll(const char *str1, const char *str2);*/

//~ Copies the string pointed to by str2 to str1. Copies up to and including the null character of str2. If str1 and str2 overlap the behavior is undefined.
//~ Returns the argument str1.
char *strcpy(char *str1, const char *str2);

//~ Copies up to n characters from the string pointed to by str2 to str1. Copying stops when n characters are copied or the terminating null character in str2 is reached. If the null character is reached, the null characters are continually copied to str1 until n characters have been copied.
//~ Returns the argument str1.
char *strncpy(char *str1, const char *str2, size_t n);

#endif
