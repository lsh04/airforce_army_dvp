#include <stdio.h>

int main(){
    int num1, num2;

    printf("숫자 2개를 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("둘 다 0인가? %d\n", (num1 == 0) && (num2 == 0));
    printf("양수가 있는가? %d\n", (num1 > 0) || (num2 > 0));
    printf("참의 반대는 무엇인가? %d\n", !1);
}