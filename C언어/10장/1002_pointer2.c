#include <stdio.h>

int main() {

    int num = 5, *p_num, copy;

    p_num = &num; // num변수의 주소 대입. 두 변수가 연결됨.
    *p_num = 7;
    printf("num=%d, p_num = %d\n", num, *p_num);

    num = 9;
    copy = *p_num;
    printf("copy = %d, p_num = %d", copy, *p_num);

    return 0;

}