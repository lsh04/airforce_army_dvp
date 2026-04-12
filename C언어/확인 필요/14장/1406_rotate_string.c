#include <stdio.h>
#include <stdlib.h>
#include "rotate_string.h"

int rotate_string(char *str, int size) {
    int k,m;

    for (k=0; k<30; k++){
        system("cls");
        for (m=0; m<size; m++){
            putchar(str[(m+k)%size]);
        }
    }
    return 0;
}