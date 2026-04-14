#include <stdio.h>

int main() {
    int num = 7, *p;
    int **dp; // 이중포인터 선언

    p = &num; // 포인터 p에 num주소 대입
    dp = &p; // 이중포인터 dp에 p 주소 대입

    printf("%p %p \n", p, *dp); // *p와 *dp에 저장된 데이터를 주소 형식으로 출력
    printf("%d %d\n", *p, **dp);  // *p와 **dp에 저장된 데이터를 정수로 출력

    **dp = 9;
    printf("%d %d\n", *p , **dp);
    return 0;
}