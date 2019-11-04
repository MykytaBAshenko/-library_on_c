#include "libmx.h"



int mx_count_words(const char *str, char c) {
    int probel= 0;
    int words = 0;

    if (!str) {
        return -1;
    }
    while (*str) {
        if (*str == c) {
            probel = 0;
        }
        else if (!probel) {
            probel = 1;
            words++;
        }
        str++;
    }
    return words;
}

