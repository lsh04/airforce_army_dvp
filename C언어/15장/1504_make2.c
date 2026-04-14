#include <stdio.h>
#include <string.h>

void str_make(char **p){ // 포인터의 주소를 전달 받음 - 이중포인터
    *p = "ring my bell";
}

int main() {
    char *words = NULL;

    str_make(&words); // 문자형 포인터 words의 주소 전달
    printf("%s\n", words);
    return 0;
}