#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 40

int main() {
    char str[WIDTH + 1] = "";
    int len = 0, k,m;

    printf("회전할 문자열 입력: ");
    fgets(str, WIDTH,stdin);
    while (str[len] != 0) {
        len++ ;
    }
    for (k=len; k<WIDTH; k++){
        str[k] = ' ';
    }
    for (k=0; k<300; k++){
        system("clear");
    for (m=0; m<WIDTH; m++){
        printf("%c", str[(m+k)%WIDTH]);
    }
    usleep(200000);
    }
    return 0;
}