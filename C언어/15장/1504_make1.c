#include <stdio.h>
#include <string.h> //strcpy() 함수가 선언되 라이브러리

void str_make(char *p) {
    strcpy(p, "ring my bell");
}

int main(){
    char str[100];

    str_make(str);
    printf("%s\n",str);
    return 0;

}