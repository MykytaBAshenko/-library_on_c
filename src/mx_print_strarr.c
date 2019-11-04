#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    int len = mx_strlen(*arr);

    for (int i = 0; i < len; i++) {
        if(i != 0)mx_printstr(delim);
        mx_printstr(arr[i]);
        
    }
    mx_printstr("\n");
}
