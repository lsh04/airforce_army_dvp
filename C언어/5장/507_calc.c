#include <stdio.h>

int main(){
    int num1, num2;
    float div;

    printf("정수와 실수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("덧셈 = %d\n", num1 + num2);
    printf("뺄셈 = %d\n", num1 - num2);
    printf("곱셈 %d\n", num1 * num2);

    div = (float)num1 / (float)num2;
    printf("나눗셈 = %.2f\n",div);

    return 0;
}