#ifndef LIMITS_H
#define LIMITS_H

//~ number of bits in a char
#define CHAR_BIT 8

//~ minimum value of char
#define CHAR_MIN SCHAR_MIN

//~ maximum value of char
#define CHAR_MAX SCHAR_MAX

//~ minimum value of signed char
#define SCHAR_MIN -127

//~ maximum value of signed char
#define SCHAR_MAX +127

//~ maximum value of unsigned char
#define UCHAR_MAX 255

#define MB_LEN_MAX 1

//~ minimum value of short
#define SHRT_MIN -32767

//~ maximum value of short
#define SHRT_MAX +32767

//~ maximum value of unsigned short
#define USHRT_MAX 65535

//~ minimum value of int
#define INT_MIN -32767

//~ maximum value of int
#define INT_MAX +32767

//~ maximum value of unsigned int
#define UINT_MAX 65535

//~ minimum value of long
#define LONG_MIN -2147483647

//~ maximum value of long
#define LONG_MAX +2147483647

//~ maximum value of unsigned long
#define ULONG_MAX 4294967295

extern int errno;

#endif
