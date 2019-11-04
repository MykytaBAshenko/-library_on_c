#include "libmx.h"
#include <stdio.h>

static bool mx_isspace(char c) {
    return c == 32 || (c > 8 && c < 14);
}

char *mx_strtrim(const char *str) {
    int strlen = mx_strlen(str) - 1;
    int i = 0;
    char *endstr;

    while (mx_isspace(str[i]) && i < strlen + 1)
        i++;
    while (mx_isspace(str[strlen]) && strlen >= 0) {
        strlen--;
    }

    endstr = mx_strnew(strlen - i + 1);
    mx_strncpy(endstr, str + i, strlen - i + 1);
    return endstr;
}
