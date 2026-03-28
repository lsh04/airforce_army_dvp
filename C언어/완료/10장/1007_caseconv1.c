#include <stdio.h>

int main(){
    char str[255], *p;

    p = str;
    printf("소문자 입력: ");
    scanf("%s",str);

    while (*p != '\0') {
        printf("%c\n", *p-32);
        p++;
    }
    return 0;
}