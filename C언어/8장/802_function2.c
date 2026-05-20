#include <stdio.h>

void fry(int min); // fry() 함수 선언. 끝은 세미콜론

int main(){
    fry(5);
    printf("고천 소스 바르기\n");

    return 0;
}

void fry(int min) { // fry() 함수 정의
    printf("우유에 재우기\n");
    printf("튀김옷 입히기\n");
    printf("%d분 튀기기\n",min);
}