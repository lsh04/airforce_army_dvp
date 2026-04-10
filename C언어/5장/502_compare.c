#include <stdio.h>

int main(){
    int num1, num2;

    printf("숫자 2개를 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("두 수가 같은가? %d\n", num1 == num2);
    printf("num1이 더 큰가? %d\n", num1 > num2);
    printf("num2는 양수인가? %d\n", num2 >= 1);

    return 0;
}