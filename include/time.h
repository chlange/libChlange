#ifndef TIME_H
#define TIME_H

#include <sys/cdefs.h>
#include <stddef.h>

__BEGIN_DECLS

#define CLOCKS_PER_SEC 1000000l

typedef unsigned long clock_t;
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

time_t time(time_t *tp);

clock_t clock(void);

size_t strftime(char *s, size_t smax, const char *fmt, const struct tm *tp);

time_t mktime(struct tm *tp);

struct tm *localtime(const time_t *tp);

struct tm *gmtime(const time_t *tp);

double difftime(time_t time2, time_t timel);

char *ctime(const time_t *tp);

char *asctime(const struct tm *tp);

__END_DECLS

#endif
