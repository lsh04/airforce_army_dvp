#include <stdio.h>

int main(){
    int num1 = 0, num2 = 0;

    ++num1;
    num2++;
    printf("단독: %d %d\n", num1, num2);
    printf("전위: %d %d\n", ++num1, --num2); // 전위: 증감 후 연산 / 증감 -> 연산
    printf("후위: %d %d\n", num1++, num2--); // 후위: 연산 후 증감 / 연산 -> 증감
    printf("결과: %d %d\n", num1, num2);

    return 0;
}