#include <stdio.h>

int main(){
    int num, div, por, rem;

    printf("숫자 2개를 입력: ");
    scanf("%d %d", &num, &div);

    rem = num % div;
    por = (num-rem) / div;

    printf("몫 = %d, 나머지 = %d\n", por, rem);

    return 0;

}