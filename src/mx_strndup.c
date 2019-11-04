#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *newstr = mx_strnew(n);
    return newstr ? mx_strncpy(newstr, s1, n) : NULL;
}
