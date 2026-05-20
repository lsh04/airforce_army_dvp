#include <stdio.h>

int main() {
    int num1;
    char c1;

    printf("숫자 입력: ");
    scanf("%d", &num1);
    printf("숫자: [%d]\n", num1);

    while (getchar() != '\n'); // getchar() 함수로 버퍼 비우기

    printf("문자 입력: ");
    scanf("%c", &c1);
    printf("문자: [%c]\n", c1);

    return 0;
}