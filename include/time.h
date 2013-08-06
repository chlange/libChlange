#ifndef TIME_H
#define TIME_H

#include <sys/cdefs.h>
#include <stddef.h>

__BEGIN_DECLS

#define CLOCKS_PER_SEC 1000000l

typedef unsigned long int clock_t;
typedef signed long time_t;

struct tm {
    int tm_sec;    /* seconds after the minute (0 to 61) */
    int tm_min;    /* minutes after the hour (0 to 59) */
    int tm_hour;   /* hours since midnight (0 to 23) */
    int tm_mday;   /* day of the month (1 to 31) */
    int tm_mon;    /* months since January (0 to 11) */
    int tm_year;   /* years since 1900 */
    int tm_wday;   /* days since Sunday (0 to 6 Sunday=0) */
    int tm_yday;   /* days since January 1 (0 to 365) */
    int tm_isdst;  /* Daylight Savings Time */
};

//~ Returns current calendar time or -1 if not available. If tp is non-NULL, return value is also assigned to *tp.
time_t time(time_t *tp);

//~ Returns processor time used by program or -1 if not available.
clock_t clock(void);

//~ Formats *tp into s according to fmt.
size_t strftime(char *s, size_t smax, const char *fmt, const struct tm *tp);

//~ Returns the local time corresponding to *tp, or -1 if it cannot be represented.
time_t mktime(struct tm *tp);

//~ Returns calendar time *tp converted into local time.
struct tm *localtime(const time_t *tp);

//~ Returns the given calendar time converted into Coordinated Universal Time, or NULL if not available.
struct tm *gmtime(const time_t *tp);

//~ Returns the difference is seconds between time2 and time1.
double difftime(time_t time2, time_t time1);

//~ Converts the given calendar time to a local time and returns the equivalent string. Equivalent to:
//~ asctime(localtime(tp))
char *ctime(const time_t *tp);

//~ Returns the given time as a string of the form:
//~ Sun Jan 3 14:14:13 1988\n\0
char *asctime(const struct tm *tp);

__END_DECLS

#endif
