#include <stdio.h>

int main(){
    char str[5] = "ABCD", *p; // 문자형 배열과 포인터 선어

    p = str; // str도 포인터 이므로 & 없이 대입

    printf("p = %c, str = %c\n", *p, *str); // str을 포인터처럼 사용
    printf("p = %c, str = %c\n", p[1], str[1]);

    p = &str[1]; // str[1]은 일반변수 이므로 & 사용
    printf("p = %s, p[1] = %c\n",p ,p[1]);

    return 0;

}